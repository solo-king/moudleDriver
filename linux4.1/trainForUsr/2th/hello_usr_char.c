#include<linux/module.h>
#include<linux/init.h>



static  int __init hello_init(void)
{
	
	printk(KERN_WARNING"%s\n",__func__);
	register_
	return 0;
}


static  void __exit hello_exit(void)
{
	printk(KERN_WARNING"%s\n",__func__);

}

module_init(hello_init);

module_exit(hello_exit);

MODULE_AUTHOR("qigan chen <chenqigan@usr.cn>");
MODULE_LICENSE("GPL");

