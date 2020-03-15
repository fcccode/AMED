use strict;
use warnings;

TEST('movups xmm0, oword [rax]    ', [0x0f,0x10,0x00          ], 'MODE64');
TEST('movups oword [r14+80], xmm1 ', [0x41,0x0f,0x11,0x4e,0x50], 'MODE64');
TEST('movups oword [r14+96], xmm0 ', [0x41,0x0f,0x11,0x46,0x60], 'MODE64');
TEST('movups oword [rcx+80], xmm1 ', [0x0f,0x11,0x49,0x50     ], 'MODE64');
TEST('movups oword [rcx+96], xmm0 ', [0x0f,0x11,0x41,0x60     ], 'MODE64');
TEST('movups oword [rcx+112], xmm0', [0x0f,0x11,0x41,0x70     ], 'MODE64');
