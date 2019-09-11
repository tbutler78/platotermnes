#include "protocol.h"
 const padByte splash[] = 
{
0x1B, 0x02, 0X1B, 0X0C, 0X1B, 0X12, 0X1B, 0XD1, 0XC0, 0X50, 0XC0,
    0X1B, 0XE1, 0XFF, 0XFF, 0XFF, 0XFF, 0X1B, 0XE2, 0XC0, 0XC0,
    0XC0, 0XC0, 0X1B, 0X0C, 0X1B, 0X12, 0X1D, 0XAF, 0XF0, 0XC0,
    0X1B, 0X5A, 0X1B, 0XD1, 0XC0, 0X44, 0X41, 0X1B, 0XD1, 0XC0,
    0X50, 0XC0, 0X1B, 0X0C, 0X1B, 0X12, 0X1B, 0XD1, 0XC0, 0X50,
    0XC0, 0X1B, 0X5A, 0X1D, 0X2B, 0XFC, 0XAC, 0X5F, 0X1B, 0X5A,
    0X1D, 0XAA, 0X71, 0XAA, 0XCC, 0XAC, 0X7E, 0XCC, 0X7E, 0X2B,
    0XDE, 0XE1, 0XDE, 0X2B, 0XFF, 0XAC, 0XC0, 0X7D, 0X42, 0X7B,
    0XC5, 0XFA, 0X48, 0XF9, 0XCA, 0X78, 0X4E, 0XF3, 0X4D, 0X6F,
    0XCC, 0X69, 0X4B, 0XE2, 0XCA, 0XAA, 0X7E, 0XC9, 0X7E, 0X2B,
    0XD7, 0X6A, 0X53, 0X6A, 0XAC, 0XC5, 0XE2, 0X44, 0XA9, 0XF9,
    0XC3, 0X71, 0X41, 0XEB, 0XC0, 0X65, 0XC0, 0X28, 0XFF, 0XC0,
    0XFC, 0X41, 0X77, 0X44, 0X74, 0XC6, 0XF3, 0XC9, 0X72, 0XCC,
    0XF0, 0XCF, 0XD2, 0XD7, 0XDB, 0X71, 0XDE, 0X72, 0X2D, 0X41,
    0XF3, 0X44, 0XC9, 0XFF, 0X4B, 0X44, 0XA9, 0XE2, 0XC3, 0X63,
    0X42, 0X65, 0X42, 0X6A, 0XC3, 0X6F, 0X44, 0XF3, 0XC5, 0XF9,
    0XC6, 0XAA, 0X69, 0XC9, 0X6A, 0XCA, 0X56, 0X7E, 0X5A, 0XCC,
    0X2B, 0XF5, 0XD1, 0XF5, 0X2E, 0XDB, 0XF0, 0XDB, 0XE8, 0X5A,
    0X60, 0X5A, 0XAA, 0X7B, 0XDB, 0XF5, 0XDE, 0X6F, 0XAF, 0X41,
    0XEB, 0X47, 0XA9, 0XF5, 0X47, 0X65, 0X44, 0X63, 0X2E, 0XDD,
    0XE2, 0X5A, 0X60, 0XD7, 0X28, 0X7E, 0XD2, 0X7B, 0XCC, 0X78,
    0X47, 0XF5, 0X42, 0X72, 0X2D, 0X5F, 0X6F, 0XDB, 0XEB, 0XD7,
    0XE7, 0XD4, 0XE2, 0XD1, 0X27, 0XFC, 0XCF, 0XF6, 0XCF, 0XEE,
    0X50, 0XE7, 0XD2, 0XE1, 0X55, 0XA6, 0X7E, 0XD2, 0X7D, 0X4E,
    0XFC, 0XCA, 0XC3, 0X7D, 0XAC, 0XDD, 0XFF, 0XD8, 0X27, 0XE2,
    0XD4, 0X65, 0XCF, 0X69, 0XCA, 0XEE, 0XC5, 0XF3, 0X41, 0X78,
    0X2B, 0XDD, 0XFF, 0X59, 0X28, 0X65, 0X56, 0X6C, 0XD2, 0XF3,
    0XCF, 0X7E, 0X4B, 0XC6, 0XA9, 0X60, 0X44, 0XE1, 0XC0, 0XE1,
    0XAA, 0XDE, 0X60, 0XDB, 0X28, 0X7D, 0XD8, 0X7B, 0X56, 0X78,
    0X53, 0XF6, 0XD2, 0XF5, 0X50, 0X74, 0X50, 0XCA, 0XF5, 0XC6,
    0X77, 0X41, 0XFA, 0XA9, 0XDD, 0X7E, 0X5A, 0XA9, 0XE1, 0XD8,
    0X65, 0X56, 0X6A, 0XD4, 0X6F, 0XD1, 0XF3, 0X4E, 0XF6, 0X4B,
    0X78, 0X48, 0X7B, 0XC3, 0X7D, 0XC0, 0XAA, 0X60, 0X28, 0XDE,
    0XE2, 0X5C, 0X65, 0X5A, 0X71, 0X5A, 0X71, 0XAA, 0XCC, 0X1D,
    0XA9, 0XE8, 0XAC, 0XC5, 0X2B, 0XED, 0XD2, 0XED, 0X2D, 0XC9,
    0XA9, 0XE8, 0XAC, 0X5C, 0XC5, 0X1D, 0X2B, 0XFC, 0X5F, 0X1D,
    0XFC, 0X2D, 0XCA, 0XFF, 0XC9, 0XAC, 0XE2, 0X48, 0X65, 0XC5,
    0X66, 0X42, 0XE7, 0XAC, 0X5F, 0X66, 0X5C, 0X65, 0X59, 0XE2,
    0X56, 0X2B, 0XFF, 0X55, 0XFC, 0XD4, 0XF9, 0X55, 0XF6, 0X56,
    0XF3, 0X59, 0X72, 0X5C, 0X71, 0X5F, 0X72, 0X2D, 0X42, 0XF3,
    0XC5, 0XF6, 0X48, 0XF9, 0XC9, 0XFC, 0XCA, 0X1D, 0XFC, 0XAC,
    0X5F, 0X00, 0X00, 0X00, 0X41, 0XC0, 0X1B, 0XD1, 0XC0, 0X50,
    0XC0, 0X1D, 0X2E, 0XF0, 0X22, 0X48, 0X1B, 0X5A, 0X1D, 0X2D,
    0XF3, 0X21, 0XD4, 0XAF, 0XED, 0XD4, 0XF0, 0X55, 0X72, 0XD7,
    0X74, 0XD8, 0XF5, 0X5A, 0XDE, 0XF5, 0X22, 0X4B, 0X50, 0XF3,
    0XD2, 0X71, 0X55, 0X6F, 0XD7, 0XED, 0XD8, 0XEB, 0X5A, 0XE8,
    0XDB, 0XE4, 0X5C, 0X2E, 0XFF, 0X5C, 0XFA, 0XDB, 0X78, 0X59,
    0XF6, 0XD8, 0X74, 0X55, 0X72, 0X53, 0X71, 0X50, 0X6F, 0X4B,
    0XEE, 0XC3, 0X42, 0X2D, 0XF3, 0X42, 0XF3, 0X21, 0XD4, 0X1D,
    0X2E, 0XFA, 0X22, 0X42, 0XAF, 0XE8, 0X42, 0X48, 0XCA, 0X4B,
    0XE7, 0X4B, 0X66, 0XCC, 0XE4, 0X4D, 0XE2, 0X4E, 0X2E, 0XFF,
    0X4D, 0X7D, 0X4B, 0X7B, 0XC9, 0XFA, 0X48, 0X42, 0X1D, 0X2D,
    0XFA, 0XA3, 0XC0, 0XAF, 0XF5, 0XC0, 0X4E, 0X2E, 0X60, 0X4E,
    0X60, 0X24, 0X41, 0X2D, 0XF3, 0X41, 0XF3, 0XA3, 0X47, 0XC5,
    0XF5, 0XC3, 0X77, 0XC0, 0XFA, 0XC0, 0X1D, 0XF3, 0X24, 0XC0,
    0XAF, 0XF0, 0XD2, 0X72, 0X53, 0XF3, 0XD4, 0XF5, 0X55, 0X56,
    0XF6, 0XD8, 0X77, 0X5A, 0X5C, 0XF6, 0XDE, 0XF5, 0XA5, 0X41,
    0XF3, 0X42, 0X71, 0X44, 0X2D, 0XF3, 0X56, 0X48, 0X2E, 0X60,
    0XC5, 0X60, 0X24, 0XD2, 0X2D, 0XF3, 0X4E, 0XC0, 0X1D, 0X2E,
    0XED, 0X55, 0XAF, 0X69, 0XDB, 0X2E, 0XED, 0XA5, 0X41, 0XED,
    0X24, 0X55, 0X1D, 0X2D, 0XF3, 0XA5, 0XDD, 0XAF, 0X69, 0XDD,
    0X50, 0XF5, 0X50, 0XF5, 0XA6, 0XD7, 0X69, 0XD7, 0XCA, 0X2D,
    0XF3, 0XCA, 0XF3, 0XA5, 0XDD, 0X1D, 0X2E, 0XF0, 0X27, 0XD1,
    0X1D, 0X2D, 0XF3, 0XD4, 0X74, 0XCC, 0XF5, 0X48, 0XF6, 0XC5,
    0XFA, 0X41, 0XFC, 0XA6, 0X5F, 0X2E, 0X60, 0X5C, 0X63, 0X59,
    0X65, 0X59, 0XE8, 0XD7, 0XEE, 0X56, 0X74, 0XD4, 0XF5, 0XD4,
    0X78, 0XD4, 0XFC, 0X55, 0XFF, 0X56, 0XAF, 0XE2, 0XD7, 0X65,
    0X59, 0XE8, 0XDB, 0XEB, 0XDD, 0X6C, 0XDE, 0XEE, 0X27, 0XC0,
    0XF0, 0XC3, 0X72, 0XC5, 0XF3, 0X47, 0XF5, 0X4B, 0XF6, 0XD1,
    0X77, 0XD7, 0XD8, 0XF6, 0XDD, 0XF5, 0X28, 0X41, 0X74, 0XC6,
    0X72, 0X48, 0X71, 0XCA, 0X6F, 0XCC, 0XED, 0X4E, 0XEB, 0XD1,
    0XE7, 0X53, 0X63, 0X55, 0X2E, 0XFF, 0XD7, 0XFA, 0XD8, 0XF9,
    0XD8, 0XF5, 0XD8, 0X72, 0XD8, 0XEE, 0XD8, 0X6A, 0XD7, 0XE7,
    0X55, 0XE4, 0XD4, 0X60, 0XD1, 0X2D, 0X7D, 0XCF, 0XFA, 0XCC,
    0X78, 0XCA, 0XF6, 0XC6, 0X74, 0XC3, 0XF3, 0X27, 0X5F, 0XD4,
    0X1D, 0XAF, 0XE8, 0XD4, 0XD7, 0XDB, 0XE7, 0XDE, 0XE4, 0X28,
    0X42, 0XE2, 0X44, 0X2E, 0XFF, 0X47, 0XFC, 0X48, 0XF9, 0XC9,
    0XF6, 0XCA, 0XF3, 0XCA, 0XEE, 0XC9, 0XEB, 0X47, 0X69, 0XC6,
    0XE7, 0X44, 0X65, 0X42, 0XE4, 0X41, 0XE2, 0X27, 0XDD, 0XE1,
    0X5A, 0X60, 0XD7, 0XD4, 0XE1, 0XD1, 0X63, 0X4D, 0XE4, 0X4B,
    0X66, 0XC9, 0XE8, 0X47, 0X6A, 0XC5, 0X6C, 0X44, 0XEE, 0XC3,
    0X71, 0XC3, 0X74, 0XC3, 0X77, 0XC3, 0XFC, 0X44, 0XFF, 0XC6,
    0XAF, 0XE1, 0X48, 0X63, 0XCA, 0XE4, 0X4B, 0X65, 0XCC, 0X66,
    0X4D, 0XE7, 0X4E, 0XE8, 0XD1, 0XD4, 0X1D, 0X2D, 0XF3, 0XA9,
    0X44, 0XAF, 0X69, 0X44, 0X69, 0X28, 0XD7, 0XF5, 0XD7, 0XF5,
    0XA9, 0XDE, 0X69, 0XDE, 0XD1, 0X2D, 0XF3, 0XD1, 0X44, 0X1D,
    0X2E, 0X60, 0XAA, 0XC3, 0XAF, 0XED, 0XC3, 0X6F, 0X44, 0X72,
    0XC5, 0XF3, 0XC6, 0X74, 0XC6, 0XF5, 0X47, 0XC9, 0XF6, 0X4B,
    0XF6, 0X2B, 0X44, 0XE8, 0X44, 0XE8, 0XAA, 0X50, 0X2E, 0X7D,
    0X50, 0X7D, 0X2B, 0XC3, 0X71, 0XC3, 0X71, 0XAA, 0X50, 0XE1,
    0X50, 0XE1, 0X2B, 0X44, 0X2D, 0XF3, 0X44, 0XF3, 0XAA, 0XCC,
    0X74, 0XC9, 0XF5, 0X48, 0XF6, 0X47, 0X77, 0XC6, 0XF9, 0X44,
    0XFA, 0XC3, 0X2E, 0X60, 0XC3, 0X1D, 0X2D, 0XF3, 0X2B, 0XC6,
    0XAF, 0XED, 0XC6, 0XF0, 0X47, 0X72, 0X48, 0XC9, 0XF3, 0XCA,
    0X74, 0XCA, 0XF5, 0X4B, 0X4D, 0XDD, 0X5F, 0XF5, 0XAC, 0X42,
    0X74, 0X44, 0XF3, 0XC6, 0X72, 0X47, 0X71, 0XC9, 0XF0, 0XCA,
    0XEE, 0X4B, 0XCC, 0XED, 0X4D, 0XEB, 0X4E, 0X6A, 0X4E, 0XE8,
    0XCF, 0X66, 0X50, 0XE4, 0X50, 0X63, 0X50, 0XE1, 0X50, 0X2E,
    0X7E, 0XCF, 0X7B, 0X4E, 0XFA, 0X4E, 0X78, 0X4D, 0X77, 0X4B,
    0XF5, 0XCA, 0X74, 0X47, 0XF3, 0XC5, 0X72, 0X44, 0X71, 0XC3,
    0X2D, 0XF3, 0XD4, 0X44, 0X2E, 0XF0, 0X2B, 0X56, 0X71, 0X55,
    0X74, 0X55, 0X77, 0X56, 0X78, 0XD7, 0XF9, 0X59, 0XFA, 0X5A,
    0XDB, 0X7B, 0XDD, 0X7D, 0X5F, 0X7E, 0XAC, 0XC0, 0XAF, 0X60,
    0X41, 0XE4, 0X41, 0X66, 0XC0, 0XE8, 0X2B, 0XDE, 0X69, 0XDD,
    0XD4, 0X2D, 0XF3, 0XD4, 0XC6, 0X1D, 0XF3, 0XAC, 0X53, 0XAF,
    0XF0, 0X53, 0XF3, 0XD4, 0XF5, 0X56, 0XD8, 0XF6, 0X5A, 0X5C,
    0XF5, 0X2D, 0XC0, 0X42, 0XF3, 0X44, 0X72, 0XC5, 0XF0, 0XC5,
    0X2E, 0X65, 0XD2, 0XAF, 0XF0, 0X5C, 0X72, 0XDD, 0X74, 0X5F,
    0XF5, 0X5F, 0XF5, 0X2E, 0XC0, 0XF6, 0X42, 0X77, 0X44, 0X47,
    0XF6, 0XCA, 0XF5, 0XCC, 0XF3, 0X4E, 0XF0, 0X50, 0XEE, 0X50,
    0X2D, 0XF3, 0X50, 0X44, 0XAF, 0XE2, 0X44, 0X2D, 0XFA, 0X2D,
    0X59, 0X77, 0XD8, 0XF5, 0XD7, 0XF3, 0X55, 0XCF, 0XF5, 0X4D,
    0XF6, 0XCC, 0X77, 0XCC, 0XFC, 0XCA, 0X2E, 0XE1, 0X48, 0XE7,
    0X47, 0X6C, 0XC5, 0XAF, 0XE1, 0XAC, 0XDE, 0X2D, 0XF3, 0XDE,
    0X53, 0X1D, 0X2E, 0XF0, 0XAF, 0XC0, 0X1B, 0XD1, 0XC0, 0X50,
    0XC0, 0X1D, 0XAC, 0X78, 0X24, 0X5C, 0X1B, 0X5A, 0X9F, 0X1B,
    0X12, 0X1B, 0XCC, 0X1B, 0XCF, 0X1B, 0XCA, 0X66, 0X6F, 0X72,
    0X1B, 0XCC, 0X1B, 0X4E, 0X1B, 0XCA, 0X1B, 0XD1, 0XC0, 0X50,
    0XC0, 0X1D, 0X2B, 0X60, 0XA0, 0XC0, 0X1B, 0X5A, 0X9F, 0X1B,
    0X12, 0XC3, 0X6F, 0XF0, 0XF9, 0X72, 0X69, 0XE7, 0XE8, 0X74,
    0XA0, 0X28, 0X1B, 0XC3, 0XC0, 0X1B, 0X42, 0XA9, 0XA0, 0XB2,
    0X30, 0XB1, 0XB8, 0XA0, 0XC9, 0XD2, 0X41, 0XD4, 0X41, 0X2E,
    0XCF, 0X4E, 0XCC, 0XC9, 0X4E, 0XC5, 0X2E, 0X8D, 0XD4, 0XE8,
    0X69, 0XF3, 0XA0, 0X74, 0X65, 0X72, 0XED, 0X69, 0XEE, 0XE1,
    0X6C, 0XA0, 0X69, 0XF3, 0XA0, 0X72, 0X65, 0X6C, 0X65, 0XE1,
    0XF3, 0X65, 0XE4, 0XA0, 0XF5, 0XEE, 0XE4, 0X65, 0X72, 0X8D,
    0X74, 0XE8, 0X65, 0XA0, 0X47, 0X4E, 0X55, 0XA0, 0X50, 0XF5,
    0XE2, 0X6C, 0X69, 0X63, 0XA0, 0XCC, 0X69, 0X63, 0X65, 0XEE,
    0XF3, 0X65, 0X2E, 0XA0, 0XD2, 0XF5, 0XEE, 0XA0, 0X74, 0XE8,
    0X65, 0X8D, 0XF0, 0X72, 0X6F, 0XE7, 0X72, 0XE1, 0XED, 0XA0,
    0X47, 0X50, 0XCC, 0XAC, 0XA0, 0X66, 0X6F, 0X72, 0XA0, 0XE4,
    0X65, 0X74, 0XE1, 0X69, 0X6C, 0XF3, 0X2E, 0X1D, 0X1B, 0X12,
    0XA9, 0XF0, 0XA6, 0X48, 0X1D, 0XAC, 0X60, 0XA0, 0XC0, 0X60,
    0X28, 0XC0, 0X1D, 0XA9, 0X60, 0XA0, 0XC0, 0X60, 0X28, 0XC0,
    0x1B, 0x03 };
 short splash_size = 1343;

