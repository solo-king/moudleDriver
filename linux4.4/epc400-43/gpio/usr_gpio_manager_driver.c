#include <linux/err.h>
#include <linux/gpio.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/of.h>
#include <linux/platform_device.h>


#define GANYE_DEBUG

#ifdef GANYE_DEBUG
        #define GANYE_PRINTK(fmt,...)\
                printk( KERN_WARNING "%s,%d:"fmt"\n",__func__,__LINE__,##__VA_ARGS__);
#else
        #define GANYE_PRINTK(fmt,...)
#endif


static int usr_gpio_manager_probe(struct platform_device *pdev)
{
	GANYE_PRINTK();
	return 0;
}


static int usr_gpio_manager_remove(struct platform_device *pdev)
{

	GANYE_PRINTK();
	return 0;

}

static const struct of_device_id of_usr_gpio_manager_match[] = {
	{ .compatible = "usr-gpio-manager", },
	{},
};

MODULE_DEVICE_TABLE(of, of_usr_gpio_manager_match);



static struct platform_driver usr_gpio_manager_driver = {
	.probe		= usr_gpio_manager_probe,
	.remove		= usr_gpio_manager_remove,
	.driver		= {
		.name	= "gpio-manager",
		.of_match_table = of_usr_gpio_manager_match,
	},
};

module_platform_driver(usr_gpio_manager_driver);
MODULE_AUTHOR("qigan chen <chenqigan@usr.cn>");
MODULE_DESCRIPTION("GPIO MANAGER DRIVER");
MODULE_LICENSE("GPL");

