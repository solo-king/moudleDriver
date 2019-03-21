#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x30d4fc44, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x792d7b13, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x6939bbb6, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x596ccfab, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xd2c397fc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xe9e659dd, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x78faaaaa, __VMLINUX_SYMBOL_STR(spi_busnum_to_master) },
	{ 0x825fb508, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x136298dc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xece8039c, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xc46e31d5, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x8d7e7283, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x2beb418e, __VMLINUX_SYMBOL_STR(might_fault) },
	{ 0xe06a6b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd2b2afe, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x78901a61, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x71e21c1e, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc6854e51, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb3ec1e79, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xfa01d427, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb2be5c04, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x937145d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5952a882, __VMLINUX_SYMBOL_STR(__raw_spin_lock_init) },
	{ 0x93b4330b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x26e98c90, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9e1289e6, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb14fa67, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7e1a5ba3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xc765c49, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c7691ed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x72dfe81d, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crohm,dh2228fv*");
