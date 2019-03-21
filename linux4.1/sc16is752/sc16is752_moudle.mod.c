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

MODULE_INFO(srcversion, "F38C89B5DAF3C5A3B7D23F8");
