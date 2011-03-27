obj-m += ati_remote.o
default:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
install: default
	cp ati_remote.ko /lib/modules/$(shell uname -r)/kernel/drivers/input/misc/
