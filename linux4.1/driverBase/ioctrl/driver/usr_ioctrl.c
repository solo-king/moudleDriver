#include <linux/err.h>
#include <linux/gpio.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/property.h>
#include <linux/cdev.h>
#include <linux/fs.h>




#define GANYE_DEBUG

#ifdef GANYE_DEBUG
	#define GANYE_PRINTK(fmt,...)\
		printk( KERN_WARNING "%s,%d:"fmt"\n",__func__,__LINE__,##__VA_ARGS__);
#else
	#define GANYE_PRINTK(fmt,...)
#endif


#define DEV_NAME			"usr_ioctrl_test"
#define MY_CLASS_NAME 		"usr_test"
struct my_test_pri {
	struct class * my_class;
	struct device * my_dev;
	dev_t dev;
	struct cdev cdev;
};

static struct my_test_pri my_test_dev;


static long ioctrl_test_ioctl (struct file *file, unsigned int cmd, unsigned long arg){

	GANYE_PRINTK("cmd = 0x%x", cmd);
	
	return 0;
}




static struct file_operations ioctrl_test_ops = {
	
	.unlocked_ioctl = ioctrl_test_ioctl,
		
};

static int ioctrl_test_probe(struct platform_device *pdev)
{
	int ret = 0;
	ret = alloc_chrdev_region(&my_test_dev.dev, 0, 1,DEV_NAME);

	if( ret < 0 ){
		GANYE_PRINTK("alloc_chrdev_region ERROR!!");
		return -1;
	}
		
	cdev_init(&my_test_dev.cdev, &ioctrl_test_ops);
	cdev_add(&my_test_dev.cdev, my_test_dev.dev, 1);
	
	my_test_dev.my_class = class_create(THIS_MODULE, MY_CLASS_NAME);
	my_test_dev.my_dev = device_create(my_test_dev.my_class, NULL, my_test_dev.dev, NULL, DEV_NAME);

	return 0;
}

static int ioctrl_test_remove(struct platform_device *pdev)
{
	device_destroy(my_test_dev.my_class, my_test_dev.dev);
	class_destroy(my_test_dev.my_class);
	cdev_del(&my_test_dev.cdev);
	return 0;
}



static const struct of_device_id of_ioctrl_test_match[] = {
	{ .compatible = "gpio-leds", },
	{},
};

MODULE_DEVICE_TABLE(of, of_ioctrl_test_match);


static struct platform_driver ioctrl_test_driver = {
	.probe		= ioctrl_test_probe,
	.remove		= ioctrl_test_remove,
	.driver		= {
		.name	= "usr-leds",
		.of_match_table = of_ioctrl_test_match,
	},
};


module_platform_driver(ioctrl_test_driver);

MODULE_AUTHOR("chenqigan <chenqigan@usr.cn>");
MODULE_DESCRIPTION("IOCTRL TEST driver");
MODULE_LICENSE("GPL");
