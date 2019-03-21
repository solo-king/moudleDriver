obj-m += spidev.o

KERNELDIR ?= /4_myandroid.lns/out/target/product/msm8909_512/obj/KERNEL_OBJ
PWD ?= $(shell pwd)
ARCH = arm
CROSS_COMPILE=/4_myandroid.lns/prebuilts/gcc/linux-x86/arm/arm-eabi-4.7/bin/arm-eabi-
CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
CFLAGS_MODULE=-fno-pic

.PHONY: modules clean
modules:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm *.o *.mod.c *.order *.symvers
