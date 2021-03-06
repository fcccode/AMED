/*BEGIN_HEADER
*
* Copyright (C) 2020 Mahdi Safsafi.
*
* https://github.com/MahdiSafsafi/AMED
*
* See licence file 'LICENCE' for use and distribution rights.
*
*END_HEADER*/


/*===----------------------------------------------------------------------===*\
|*                                                                            *|
|*                Automatically generated file, do not edit!                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

const amed_db_encodedin amed_aarch32_encodedins_array[] = 
{
  /* 0    */ {0x00000000, 0},
  /* 1    */ {0x0000f000, 4}, {0x00000000, 0}, // Rt
  /* 3    */ {0x000f0000, 4}, {0x00000000, 0}, // Rn
  /* 5    */ {0x00000fff, 12}, {0x00000000, 0}, // imm12
  /* 7    */ {0x00000f00, 4}, {0x00000000, 0}, // imm4
  /* 9    */ {0x040070ff, 12}, {0x00000000, 0}, // i:imm3:imm8
  /* 11   */ {0x0000000f, 4}, {0x00000000, 0}, // Vm
  /* 13   */ {0x00000f80, 5}, {0x00000000, 0}, // imm5
  /* 15   */ {0x00000060, 2}, {0x00000000, 0}, // stype
  /* 17   */ {0x00000007, 3}, {0x00000000, 0}, // Vm<2:0>
  /* 19   */ {0x00000038, 3}, {0x00000000, 0}, // Rs
  /* 21   */ {0x000070c0, 5}, {0x00000000, 0}, // imm3:imm2
  /* 23   */ {0x00000030, 2}, {0x00000000, 0}, // align
  /* 25   */ {0x000001c0, 3}, {0x00000000, 0}, // Rm
  /* 27   */ {0x00000700, 3}, {0x00000000, 0}, // Rd
  /* 29   */ {0x000000ff, 8}, {0x00000000, 0}, // imm8
  /* 31   */ {0x00000087, 4}, {0x00000000, 0}, // D:Rd
  /* 33   */ {0x00000078, 4}, {0x00000000, 0}, // Rm
  /* 35   */ {0x0000007f, 7}, {0x00000000, 0}, // imm7
  /* 37   */ {0x00ffffff, 24}, {0x00000000, 0}, // imm24
  /* 39   */ {0x000007ff, 11}, {0x00000000, 0}, // imm11
  /* 41   */ {0x04000800, 2}, {0x00002000, 1}, {0x003f07ff, 17}, {0x00000000, 0}, // S:J2:J1:imm6:imm11
  /* 45   */ {0x04002800, 3}, {0x03ff07ff, 21}, {0x00000000, 0}, // S:J1:J2:imm10:imm11
  /* 48   */ {0x001f0000, 5}, {0x00000000, 0}, // imm6<4:0>
  /* 50   */ {0x0000001f, 5}, {0x00000000, 0}, // sat_imm
  /* 52   */ {0x000fff0f, 16}, {0x00000000, 0}, // imm12:imm4
  /* 54   */ {0x00ffffff, 24}, {0x01000000, 1}, {0x00000000, 0}, // imm24:H
  /* 57   */ {0x04002800, 3}, {0x03ff07fe, 20}, {0x00000000, 0}, // S:J1:J2:imm10H:imm10L
  /* 60   */ {0x000002f8, 6}, {0x00000000, 0}, // i:imm5
  /* 62   */ {0x000000e0, 3}, {0x00000000, 0}, // index_align<3:1>
  /* 64   */ {0x0000003f, 6}, {0x00000000, 0}, // imm6
  /* 66   */ {0x000f0fff, 16}, {0x00000000, 0}, // imm4:imm12
  /* 68   */ {0x000000f0, 4}, {0x00000000, 0}, // opc1
  /* 70   */ {0x00800000, 1}, {0x00000000, 0}, // U
  /* 72   */ {0x00200000, 1}, {0x00000000, 0}, // W
  /* 74   */ {0x0000ffff, 16}, {0x00000000, 0}, // P:M:register_list
  /* 76   */ {0x00007fff, 15}, {0x00000000, 0}, // register_list
  /* 78   */ {0x000007c0, 5}, {0x00000000, 0}, // imm5
  /* 80   */ {0x00000200, 1}, {0x00000000, 0}, // U
  /* 82   */ {0x00000f0f, 8}, {0x00000000, 0}, // imm4H:imm4L
  /* 84   */ {0x00000100, 1}, {0x00000000, 0}, // itype<0>
  /* 86   */ {0x00e00000, 3}, {0x00000000, 0}, // opc1
  /* 88   */ {0x000f0000, 4}, {0x040070ff, 12}, {0x00000000, 0}, // imm4:i:imm3:imm8
  /* 91   */ {0x00001800, 2}, {0x00000000, 0}, // op
  /* 93   */ {0x00600000, 2}, {0x00000000, 0}, // stype
  /* 95   */ {0x00400000, 1}, {0x00000000, 0}, // R
  /* 97   */ {0x00100000, 1}, {0x00000000, 0}, // R
  /* 99   */ {0x00400100, 2}, {0x000f0000, 4}, {0x00000000, 0}, // R:M:M1
  /* 102  */ {0x00100010, 2}, {0x000f0000, 4}, {0x00000000, 0}, // R:M:M1
  /* 105  */ {0x00100010, 2}, {0x00000f00, 4}, {0x00000000, 0}, // R:M:M1
  /* 108  */ {0x00000008, 1}, {0x00000000, 0}, // Vm<3>
  /* 110  */ {0x00000c00, 2}, {0x00000000, 0}, // rotate
  /* 112  */ {0x0040f000, 5}, {0x00000000, 0}, // D:Vd
  /* 114  */ {0x0000002f, 5}, {0x00000000, 0}, // M:Vm
  /* 116  */ {0x00000080, 1}, {0x000f0000, 4}, {0x00000000, 0}, // N:Vn
  /* 119  */ {0x00000080, 1}, {0x00000000, 0}, // index_align<3>
  /* 121  */ {0x00000040, 1}, {0x00000000, 0}, // index_align<2>
  /* 123  */ {0x0000f000, 4}, {0x00400000, 1}, {0x00000000, 0}, // Vd:D
  /* 126  */ {0x0000000f, 4}, {0x00000020, 1}, {0x00000000, 0}, // Vm:M
  /* 129  */ {0x000f0080, 5}, {0x00000000, 0}, // Vn:N
  /* 131  */ {0x00000020, 1}, {0x00000f00, 4}, {0x0107000f, 8}, {0x00000000, 0}, // op:cmode:i:imm3:imm4
  /* 135  */ {0x00000020, 1}, {0x00000f00, 4}, {0x1007000f, 8}, {0x00000000, 0}, // op:cmode:i:imm3:imm4
  /* 139  */ {0x01000000, 1}, {0x00000000, 0}, // rot
  /* 141  */ {0x01800000, 2}, {0x00000000, 0}, // rot
  /* 143  */ {0x00000020, 1}, {0x00000000, 0}, // M
  /* 145  */ {0x00300000, 2}, {0x00000000, 0}, // rot
  /* 147  */ {0x003f0000, 6}, {0x00000000, 0}, // imm6
  /* 149  */ {0x000e0000, 3}, {0x00000000, 0}, // imm4<3:1>
  /* 151  */ {0x000c0000, 2}, {0x00000000, 0}, // imm4<3:2>
  /* 153  */ {0x00080000, 1}, {0x00000000, 0}, // imm4<3>
  /* 155  */ {0x00000028, 2}, {0x00000000, 0}, // M:Vm<3>
  /* 157  */ {0x00000007, 3}, {0x00000020, 1}, {0x00000000, 0}, // Vm<2:0>:M
  /* 160  */ {0x00000010, 1}, {0x00000000, 0}, // index_align<0>
  /* 162  */ {0x000000c0, 2}, {0x00000000, 0}, // index_align<3:2>
  /* 164  */ {0x00000070, 3}, {0x00000000, 0}, // index_align<2:0>
  /* 166  */ {0x000f000f, 8}, {0x00000000, 0}, // imm4H:imm4L
  /* 168  */ {0x00200060, 3}, {0x00000000, 0}, // opc1<0>:opc2
  /* 170  */ {0x00200040, 2}, {0x00000000, 0}, // opc1<0>:opc2<1>
  /* 172  */ {0x00070000, 3}, {0x00000000, 0}, // imm6<2:0>
};

