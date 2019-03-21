cmd_/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o := /4_myandroid.lns/prebuilts/gcc/linux-x86/arm/arm-eabi-4.7/bin/arm-eabi-gcc -Wp,-MD,/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/.spidev.mod.o.d  -nostdinc -isystem /usr/work/msm8909.la.1.0/LINUX/android/prebuilts/gcc/linux-x86/arm/arm-eabi-4.7/bin/../lib/gcc/arm-eabi/4.7/include -I/usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include -Iarch/arm/include/generated  -I/usr/work/msm8909.la.1.0/LINUX/android/kernel/include -Iinclude -I/usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi -Iinclude/generated/uapi -include /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kconfig.h   -I/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test -D__KERNEL__ -mlittle-endian   -I/usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -fno-inline-functions-called-once -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(spidev.mod)"  -D"KBUILD_MODNAME=KBUILD_STR(spidev)" -DMODULE -fno-pic -c -o /usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o /usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.c

source_/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o := /usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.c

deps_/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o := \
    $(wildcard include/config/module/unload.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/module.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/unused/symbols.h) \
    $(wildcard include/config/module/sig.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/debug/set/module/ronx.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/int-ll64.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitsperlong.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/bitsperlong.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/posix_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/stddef.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/stddef.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/posix_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/posix_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/const.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/stat.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/stat.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/stat.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/prebuilts/gcc/linux-x86/arm/arm-eabi-4.7/bin/../lib/gcc/arm-eabi/4.7/include/stdarg.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/linkage.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/stringify.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/linkage.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/bitops.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/bitops.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/typecheck.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/irqflags.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/hwcap.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/hwcap.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/non-atomic.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/fls64.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/sched.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/hweight.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/arch_hweight.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/const_hweight.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/lock.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/le.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/byteorder.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/byteorder/little_endian.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/byteorder/little_endian.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/swab.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/swab.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/swab.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/uapi/asm/swab.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/byteorder/generic.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/oops/log/buffer.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kern_levels.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/dynamic_debug.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/kernel.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/sysinfo.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/div64.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/compiler.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/seqlock.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/bug.h \
    $(wildcard include/config/panic/on/data/corruption.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/bottom_half.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/spinlock_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/spinlock_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rwlock_types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/spinlock.h \
    $(wildcard include/config/msm/krait/wfe/fixup.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/hw_breakpoint.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rwlock.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/atomic.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/cmpxchg-local.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/atomic-long.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/math64.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/time.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/uidgid.h \
    $(wildcard include/config/uidgid/strict/type/checks.h) \
    $(wildcard include/config/user/ns.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/highuid.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kmod.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/gfp.h \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/wait.h \
  arch/arm/include/generated/asm/current.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/current.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/wait.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/bitmap.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/string.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/string.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/page-flags-layout.h \
    $(wildcard include/config/sparsemem/vmemmap.h) \
  include/generated/bounds.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/memory/hotplug/sparse.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/glue.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/pgtable-2level-types.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/sizes.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/mach-msm/include/mach/memory.h \
    $(wildcard include/config/cache/l2x0.h) \
    $(wildcard include/config/arch/msm/scorpion.h) \
    $(wildcard include/config/arch/msm/krait.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/memory_model.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/getorder.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/notifier.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/errno.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/errno.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/errno-base.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/have/arch/mutex/cpu/relax.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/mutex-debug.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rwsem-spinlock.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/srcu.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/tiny/preempt/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/completion.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rcutree.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/jiffies.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/timex.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/timex.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/param.h \
  arch/arm/include/generated/asm/param.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/asm-generic/param.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/timex.h \
    $(wildcard include/config/arch/multiplatform.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/mach-msm/include/mach/timex.h \
    $(wildcard include/config/have/arch/has/current/timer.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/sched/book.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/smp.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/smp.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/pfn.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/percpu.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/percpu.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/topology.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/sysctl.h \
    $(wildcard include/config/sysctl.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/rbtree.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/sysctl.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/elf.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/elf.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/user.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/elf.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/uapi/linux/elf-em.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kobject.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/sysfs.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kobject_ns.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/kref.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/ppc64.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/tracepoint.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/static_key.h \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/arch/arm/include/asm/module.h \
    $(wildcard include/config/arm/unwind.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  /usr/work/msm8909.la.1.0/LINUX/android/kernel/include/linux/vermagic.h \
  include/generated/utsrelease.h \

/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o: $(deps_/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o)

$(deps_/usr/work/msm8909ModuleDriver/sc16isxxx_driver/spi_test/spidev.mod.o):
