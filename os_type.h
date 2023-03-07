typedef enum {
    /* see https://gcc.gnu.org/install/specific.html */
aarch64*-*-*
alpha*-*-*
amdgcn-*-amdhsa
amd64-*-solaris2*
arc-*-elf32
arc-linux-uclibc
arm-*-eabi
avr
Blackfin
cris
DOS
epiphany-*-elf
ft32-*-elf
*-*-freebsd*
h8300-hms
hppa*-hp-hpux*
hppa*-hp-hpux10
hppa*-hp-hpux11
*-*-linux-gnu
i?86-*-linux*
i?86-*-solaris2*
ia64-*-linux
ia64-*-hpux*
*-ibm-aix*
iq2000-*-elf
loongarch
lm32-*-elf
lm32-*-uclinux
m32c-*-elf
m32r-*-elf
m68k-*-*
m68k-*-uclinux
microblaze-*-elf
mips-*-*
moxie-*-elf
msp430-*-elf
nds32le-*-elf
nds32be-*-elf
nvptx-*-none
or1k-*-elf
or1k-*-linux
powerpc*-*-*
powerpc-*-darwin*
powerpc-*-elf
powerpc*-*-linux-gnu*
powerpc-*-netbsd*
powerpc-*-eabisim
powerpc-*-eabi
powerpcle-*-elf
powerpcle-*-eabisim
powerpcle-*-eabi
riscv32-*-elf
riscv32-*-linux
riscv64-*-elf
riscv64-*-linux
rl78-*-elf
rx-*-elf
s390-*-linux*
s390x-*-linux*
s390x-ibm-tpf*
*-*-solaris2*
sparc*-*-*
sparc-sun-solaris2*
sparc-*-linux*
sparc64-*-solaris2*
sparcv9-*-solaris2*
c6x-*-*
visium-*-elf
*-*-vxworks*
x86_64-*-*, amd64-*-*
x86_64-*-solaris2*
xtensa*-*-elf
xtensa*-*-linux*
Microsoft Windows
*-*-cygwin
*-*-mingw32
OS/2
Older systems
all ELF targets (SVR4, Solaris 2, etc.)
} 

#include <stdio.h>
int main() {
    #ifdef __linux__
        printf("OS: Linux\n");
    #elif __APPLE__
        printf("OS: macOS\n");
    #elif __FreeBSD__
        printf("OS: FreeBSD\n");
    #elif __NetBSD__
        printf("OS: NetBSD\n");
    #elif __OpenBSD__
        printf("OS: OpenBSD\n");
    #elif _WIN32
        printf("OS: Windows\n");
    #else
        printf("OS: Unknown\n");
    #endif

    #ifdef __x86_64__
        printf("CPU: x86_64\n");
    #elif __i386__
        printf("CPU: i386\n");
    #elif __arm__
        printf("CPU: ARM\n");
    #else
        printf("CPU: Unknown\n");
    #endif

    return 0;
}
