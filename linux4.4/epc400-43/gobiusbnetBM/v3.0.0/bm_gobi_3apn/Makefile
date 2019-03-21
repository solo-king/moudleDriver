obj-m := GobiNet.o
GobiNet-objs := GobiUSBNet.o QMIDevice.o QMI.o usbnet_2_6_32.o usbnet_3_0_6.o \
	            usbnet_2_6_35.o usbnet_3_10_21.o usbnet_3_12_xx.o usbnet_4_4_xx.o
KERNELDIR ?=/home/chenqigan/myandroid_epc400-43.lns/kernel
PWD ?= $(shell pwd)
ARCH = arm
CROSS_COMPILE=/home/chenqigan/myandroid_epc400-43.lns/prebuilts/gcc/linux-x86/arm/arm-linux-androideabi-4.9/bin/arm-linux-androidkernel-

CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
CFLAGS_MODULE=-fno-pic

.PHONY: modules clean
modules:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNELDIR) M=$(PWD) $@
clean:
	rm *.o *.mod.c *.order *.symvers *.ko



