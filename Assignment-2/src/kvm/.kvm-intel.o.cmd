savedcmd_arch/x86/kvm/kvm-intel.o := ld  -m elf_x86_64 -z noexecstack     -r -o arch/x86/kvm/kvm-intel.o @arch/x86/kvm/kvm-intel.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --retpoline --rethunk --stackval --static-call --uaccess --prefix=16  --link  --module arch/x86/kvm/kvm-intel.o

arch/x86/kvm/kvm-intel.o: $(wildcard ./tools/objtool/objtool)
