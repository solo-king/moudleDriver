#define pr_fmt(fmt)		"chenqigan:"fmt

#include <linux/module.h>
#include <linux/timer.h>
#include <linux/jiffies.h>
#include <linux/module.h>

static struct timer_list g_my_timer;
static int timer_call_count;

static void	my_timer_function(unsigned long data)
{
	pr_err("timer_call_count=%d\n", timer_call_count++);
	g_my_timer.expires = jiffies + msecs_to_jiffies(1000);
	add_timer(&g_my_timer);

}
static int __init my_timer_init(void)
{

	pr_err("%s,%d\n",__func__, __LINE__);
	init_timer(&g_my_timer);
	g_my_timer.function = &my_timer_function;

	g_my_timer.expires = jiffies + msecs_to_jiffies(1000);
	add_timer(&g_my_timer);
//	TIMER_INITIALIZER(_function,_expires,_data)
//	DEFINE_TIMER(rtc_irq_timer,rtc_dropped_irq,0,0)
//	setup_timer(timer,fn,data)
//	add_timer(struct timer_list * timer)
//	del_timer(struct timer_list * timer)
//	mod_timer(struct timer_list * timer,unsigned long expires)
	return 0;
}

static void __exit my_timer_exit(void)
{
	pr_err("%s,%d\n",__func__, __LINE__);
	del_timer(&g_my_timer);
}

module_init(my_timer_init);
module_exit(my_timer_exit);
MODULE_AUTHOR("qigan chen <chenqigan@usr.cn>");
MODULE_DESCRIPTION("TIMER TEST driver");
MODULE_LICENSE("GPL");
