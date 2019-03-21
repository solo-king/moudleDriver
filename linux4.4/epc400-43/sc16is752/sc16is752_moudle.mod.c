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
	{ 0x2dee4aa1, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0x58bc5297, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x332883e, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x613cf43e, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x41479c0, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf676b09b, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x4df71c6f, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0xe6340d02, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x4a9b1664, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xea28ea11, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x40175ef6, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0x83b3f7d6, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xefc5dfa9, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x4ab4f154, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x6dd7fa1, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x2bc2fdd6, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x17b3119d, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x4a6764dc, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf748b9fa, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x9fb24bbd, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xde1a64a1, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x83332905, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfe71bff5, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0x6c894731, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0xdf31fdad, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xe773cab6, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0x35d5e405, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x9c58496, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8205365, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x3f61c885, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0x4f4fb252, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xf87e8e0, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5a5da5cd, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x79e0d440, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd9aae81, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa1ac277a, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762*");
