#include <linux/err.h>
#include <linux/gpio.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/property.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include "usr-leds.h"


#define		DEV_NAME		"usr_leds"
#define		CLASS_NAME		"usr_class"


#define GANYE_DEBUG

#ifdef GANYE_DEBUG
	#define GANYE_PRINTK(fmt,...)\
		printk( KERN_WARNING "%s,%d:"fmt"\n",__func__,__LINE__,##__VA_ARGS__);
#else
	#define GANYE_PRINTK(fmt,...)
#endif

struct usr_led{
	const char* name;
	struct gpio_desc *gpiod;
};


struct usr_leds_priv {
	int num_leds;
	struct class	*my_class;
	struct device 	*my_dev;
	dev_t	my_dev_num;
	struct cdev		my_cdev;
	/*
		led sort must is signal_led1, signal_led2,signal_led3,signal_led4,net_led,custom_led,work_led with leds[0...6]
	*/
	struct usr_led  leds[];
};

struct usr_leds_privs{
	int num_leds;
	struct class	*my_class;
	struct device 	*my_dev;
	dev_t	my_dev_num;
	struct cdev		my_cdev;
	//struct usr_led  *leds;
};

struct  usr_leds_priv *g_my_leds;

static void delete_usr_leds(struct usr_leds_priv *leds)
{
	GANYE_PRINTK();
}



static int set_led_to_leds(const struct usr_led *template,
	struct usr_led *led_dat, struct device *parent)
{
	int ret;
	 
	led_dat->gpiod = template->gpiod;
	if (!led_dat->gpiod) {
		GANYE_PRINTK("led_dat->gpiod  is NULL")
		return -1;
	}
	 
	ret = gpiod_direction_output(led_dat->gpiod, 0);
	if (ret < 0)
		return ret;
	
	return 0;
}


static inline int sizeof_usr_leds_priv(int num_leds)
{
	GANYE_PRINTK("sizeof(struct usr_leds_priv) = %d, sizeof(struct usr_leds_privs) = %d", sizeof(struct usr_leds_priv), sizeof(struct usr_leds_privs))
	return sizeof(struct usr_leds_priv) +
		(sizeof(struct usr_led) * num_leds);
}



static struct usr_leds_priv *usr_leds_create(struct platform_device *pdev)
{
	struct device *dev = &pdev->dev;
	struct fwnode_handle *child;
	struct usr_leds_priv *priv;
	int count, ret;
	struct device_node *np;
	/*  in order to alloc led  */
	count = device_get_child_node_count(dev);
	if (!count)
		return ERR_PTR(-ENODEV); 
	priv = devm_kzalloc(dev, sizeof_usr_leds_priv(count), GFP_KERNEL);
	if (!priv)
		return ERR_PTR(-ENOMEM);

	device_for_each_child_node(dev, child) {
		
		struct usr_led led = {};
		/* get GPIO descriptors */
		led.gpiod= devm_get_gpiod_from_child(dev, NULL, child);
		if (IS_ERR(led.gpiod)) {
			fwnode_handle_put(child);
			ret = PTR_ERR(led.gpiod);
			goto err;
		}

		np = to_of_node(child);
		 
		fwnode_property_read_string(child, "label", &led.name);
		GANYE_PRINTK("led.name = %s", led.name);
		ret = set_led_to_leds(&led, &priv->leds[priv->num_leds++], dev);
		if (ret < 0) {
			fwnode_handle_put(child);
			goto err;
		}
	}
	
	return priv;

err:
	delete_usr_leds(priv);
	return ERR_PTR(ret);
}


static int ctrl_leds(unsigned int cmd)
{

	switch(cmd){

		case SIGNAL1_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL1_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case SIGNAL1_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL1_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case SIGNAL2_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL2_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case SIGNAL2_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL2_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case SIGNAL3_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL3_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case SIGNAL3_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL3_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case SIGNAL4_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL4_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case SIGNAL4_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[SIGNAL4_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case NET_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[NET_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case NET_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[NET_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case CUSTOM_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[CUSTOM_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case CUSTOM_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[CUSTOM_LED_LOCATION].gpiod, LED_QUENCH);
			break;
		case WORK_LED_ON_WRAPED:
			gpiod_set_value(g_my_leds->leds[WORK_LED_LOCATION].gpiod, LED_LIGHTEN);
			break;
		case WORK_LED_OFF_WRAPED:
			gpiod_set_value(g_my_leds->leds[WORK_LED_LOCATION].gpiod, LED_QUENCH);
			break;

	}

	return 0;
}

static long usr_leds_unlocked_ioctl(struct file * file, unsigned int cmd , unsigned long arg)
{

	GANYE_PRINTK("cmd = %d", cmd);
	
	return ctrl_leds(cmd);
}

static struct file_operations usr_leds_fops = {

	.unlocked_ioctl = usr_leds_unlocked_ioctl,

};



static int create_dev_on_class( struct usr_leds_priv *my_leds)
{
	int ret; 
	ret = alloc_chrdev_region(&my_leds->my_dev_num,	0, 1, DEV_NAME);
	if(ret != 0){
		GANYE_PRINTK("alloc chrdev region error !!, ret = %d", ret);
		return ret;
	}
	cdev_init(&my_leds->my_cdev, &usr_leds_fops);
	cdev_add(&my_leds->my_cdev, my_leds->my_dev_num, 1);
	my_leds->my_class = class_create(THIS_MODULE, CLASS_NAME);
	my_leds->my_dev = device_create( my_leds->my_class, NULL, my_leds->my_dev_num, NULL,DEV_NAME);
	return 0;
}

static int usr_leds_probe(struct platform_device  *pdev)
{

	struct usr_leds_priv* my_leds;
	int ret = -1;
	 
	my_leds = usr_leds_create(pdev);
	if (IS_ERR(my_leds)){
		GANYE_PRINTK("usr_leds_create error")
		return PTR_ERR(my_leds);
	}	
	
	
	ret = create_dev_on_class(my_leds);
//	sort_led_dev(my_leds);
	platform_set_drvdata(pdev, my_leds);
	g_my_leds = my_leds;
	return ret;
		
}


static int usr_leds_remove(struct platform_device *pdev)
{
	struct usr_leds_priv *priv = platform_get_drvdata(pdev);
	device_destroy(priv->my_class, priv->my_dev_num);
	class_destroy(priv->my_class);
	cdev_del(&priv->my_cdev);
	return 0;
}

static const struct of_device_id of_usr_leds_match[] = {
	{ .compatible = "usr-leds", },
	{},
};

MODULE_DEVICE_TABLE(of, of_usr_leds_match);


static struct platform_driver usr_leds_driver = {
	.probe		= usr_leds_probe,
	.remove		= usr_leds_remove,
	.driver		= {
		.name	= "usr-leds",
		.of_match_table = of_usr_leds_match,
	},
};


module_platform_driver(usr_leds_driver);

MODULE_AUTHOR("chenqigan <chenqigan@usr.cn>");
MODULE_DESCRIPTION("USR-EPC400 LED driver");
MODULE_LICENSE("GPL");
