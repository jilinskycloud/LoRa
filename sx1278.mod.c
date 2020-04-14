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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfa985410, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb37da9a1, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x208614a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6828306, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc2bdc34f, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x34acd8dc, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x43c34b68, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x49fcab7e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x822d3e16, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x40a6d9af, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3bb59b5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x87a740ad, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5f3c47dd, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7d84f58, __VMLINUX_SYMBOL_STR(dev_get_regmap) },
	{ 0x7267eeee, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5d5890a1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x313a8cf4, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfeb25d8b, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xcc839474, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcca6874c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf6ae12d0, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x495be299, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9efa63ac, __VMLINUX_SYMBOL_STR(regmap_get_device) },
	{ 0x283a57dc, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x34ce7e95, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3c8c7d13, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csemtech,sx1276*");
MODULE_ALIAS("of:N*T*Csemtech,sx1277*");
MODULE_ALIAS("of:N*T*Csemtech,sx1278*");
MODULE_ALIAS("of:N*T*Csemtech,sx1279*");
MODULE_ALIAS("of:N*T*Csx1278*");
MODULE_ALIAS("spi:sx1278");

MODULE_INFO(srcversion, "F02260E4B345A41B0EEB82A");
