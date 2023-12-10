savedcmd_arch/x86/kvm/kvm-amd.ko := ld -r  -m elf_x86_64 -z noexecstack   --build-id=sha1  -T scripts/module.lds -o arch/x86/kvm/kvm-amd.ko arch/x86/kvm/kvm-amd.o arch/x86/kvm/kvm-amd.mod.o
