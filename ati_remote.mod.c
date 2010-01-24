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
	{ 0xec5ba0f9, "module_layout" },
	{ 0x91766c09, "param_get_ulong" },
	{ 0x799c50a, "param_set_ulong" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xff964b25, "param_set_int" },
	{ 0x4163ef55, "input_free_device" },
	{ 0x541ab510, "input_register_device" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xd0d8621b, "strlen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xadd5eab8, "usb_alloc_urb" },
	{ 0x7bcc320a, "usb_buffer_alloc" },
	{ 0x8a86d20f, "input_allocate_device" },
	{ 0x4661e311, "__tracepoint_kmalloc" },
	{ 0x142c23f8, "kmem_cache_alloc" },
	{ 0x28849590, "kmalloc_caches" },
	{ 0x608940c9, "usb_register_driver" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7d11c268, "jiffies" },
	{ 0xeab3f26e, "input_event" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xb281b25f, "per_cpu__current_task" },
	{ 0xb72397d5, "printk" },
	{ 0xd18a9194, "dev_driver_string" },
	{ 0x4a0dcde4, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1721eec3, "input_unregister_device" },
	{ 0xe0b802af, "usb_buffer_free" },
	{ 0xce6bb845, "usb_free_urb" },
	{ 0x4ff4adb5, "usb_kill_urb" },
	{ 0x71d71df, "usb_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "D597692DC52875C0E69844B");
