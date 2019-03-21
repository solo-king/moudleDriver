obj-m += usr-leds.o

KERNELDIR ?=/home/chenqigan/work/epc500_android-6.0/kernel_imx
PWD ?= $(shell pwd)
ARCH = arm
CROSS_COMPILE=/home/chenqigan/work/epc500_android-6.0/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-

CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
CFLAGS_MODULE=-fno-pic

.PHONY: modules clean
modules:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNELDIR) M=$(PWD) $@
clean:
	rm *.o *.mod.c *.order *.symvers *.ko
