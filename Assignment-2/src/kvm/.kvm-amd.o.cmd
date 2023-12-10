savedcmd_arch/x86/kvm/kvm-amd.o := ld  -m elf_x86_64 -z noexecstack     -r -o arch/x86/kvm/kvm-amd.o @arch/x86/kvm/kvm-amd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --retpoline --rethunk --stackval --static-call --uaccess --prefix=16  --link  --module arch/x86/kvm/kvm-amd.o

arch/x86/kvm/kvm-amd.o: $(wildcard ./tools/objtool/objtool)
