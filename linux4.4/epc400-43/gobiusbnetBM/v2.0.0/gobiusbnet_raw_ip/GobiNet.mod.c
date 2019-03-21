#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xafeb413e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x61124bd7, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xb2ec56fe, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9d2b146, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x31cefcfa, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xc6a822e6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2797c866, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xbcf89ab6, __VMLINUX_SYMBOL_STR(__wake_up_sync) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x1a847bec, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2b7aafe7, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x6342b3ad, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x91a61df8, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xdb017391, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x35af87e2, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x3d31c28e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x81f00f77, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xea28ea11, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79e0d440, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9bff861, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x8798b934, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fba7c4a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9aaec979, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x809c82d1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xf081190d, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2a93c765, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xcc951c9c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8492a31e, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x4845ff74, __VMLINUX_SYMBOL_STR(init_task) },
	{ 0xf19bc9fa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0e6acac, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x39e65258, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x4a9b1664, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x23e69baa, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x37041b51, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x553dd8a6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x221cc2ae, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7a61ef7f, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9d7a7af1, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x89001cfd, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x6a049328, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xf98dcc41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v2020p2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05C6p9025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2020p2060d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "649113143AB3152D37803E9");
