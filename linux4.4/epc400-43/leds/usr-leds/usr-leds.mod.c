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
	{ 0xbfaa924d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2b985027, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1cebcf3b, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf081190d, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x9d7a7af1, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x8492a31e, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xf9d2b146, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x70a45115, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x3dd615bf, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0x81c01d98, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0x57a0f20d, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0x90ba87bd, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0x83b3f7d6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84f174f5, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x61124bd7, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7a61ef7f, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xdb017391, __VMLINUX_SYMBOL_STR(device_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cusr-leds*");
