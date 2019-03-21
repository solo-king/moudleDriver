#include<linux/module.h>
#include<linux/init.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>



#define 	DEV_NAME	"usr_dev"
#define		DEV_CLASS_NAME		"usr_dev_class"

#define GANYE_DEBUG

#ifdef GANYE_DEBUG
	#define GANYE_PRINTK(fmt,...)\
		printk( KERN_WARNING "%s,%d:"fmt"\n",__func__,__LINE__,##__VA_ARGS__);
#else
	#define GANYE_PRINTK(fmt,...)
#endif



struct usr_dev {

	char* name;
	struct cdev my_cdev;
	struct	device *dev;
	dev_t dev_num;
	struct class *usr_class;
};

struct usr_dev	usr_dev_impl={

	.name = DEV_NAME,
	
};

static ssize_t usr_dev_driver_read (struct file *file, char __user * buf, size_t count, loff_t *loff)
{

	GANYE_PRINTK();
	return 0;

}
static ssize_t usr_dev_driver_write (struct file *file, const char __user *buf, size_t count, loff_t *loff)
{
	int ret ;
	char write_buf_from_user[100] = {0};
	
	ret = copy_from_user(write_buf_from_user, buf, count);
	GANYE_PRINTK("write_buf:%s, ret = %d", write_buf_from_user, ret)
		
	return ret;
}


static struct file_operations usr_dev_driver_fops = {

	.read = usr_dev_driver_read,
	.write = usr_dev_driver_write,
	
};


static  int __init usr_dev_driver_init(void)
{
	int ret = alloc_chrdev_region(&usr_dev_impl.dev_num,0,1,DEV_NAME);
	if( ret != 0){
		goto chrdev_alloc_err;
	}

	cdev_init(&usr_dev_impl.my_cdev, &usr_dev_driver_fops);
	ret = cdev_add(&usr_dev_impl.my_cdev, usr_dev_impl.dev_num,1);
	if(ret < 0) goto cdev_add_error;
	usr_dev_impl.usr_class = class_create(THIS_MODULE, DEV_CLASS_NAME);
	if(IS_ERR(usr_dev_impl.usr_class))
			goto	class_create_err;
	usr_dev_impl.dev = device_create(usr_dev_impl.usr_class, NULL, usr_dev_impl.dev_num, NULL, DEV_NAME);
	if(IS_ERR(usr_dev_impl.dev))
			goto device_create_err;

	
device_create_err:		
class_create_err:	
cdev_add_error:	
	
chrdev_alloc_err:
	return ret;
}


static  void __exit usr_dev_driver_exit(void)
{
	device_destroy(usr_dev_impl.usr_class, usr_dev_impl.dev_num);
	class_destroy(usr_dev_impl.usr_class);
	cdev_del(&usr_dev_impl.my_cdev);
}

module_init(usr_dev_driver_init);

module_exit(usr_dev_driver_exit);

MODULE_AUTHOR("qigan chen <chenqigan@usr.cn>");
MODULE_LICENSE("GPL");

