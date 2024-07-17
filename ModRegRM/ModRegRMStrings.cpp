#include "./ModRegRMStrings.h"

const char * GeneralRegisterString[24] =
{
/* 8-bit Registers */ /* 16-bit Registers */ /* 32-Bit Registers */

  /* 0x00 */ "al",      /* 0x01 */ "ax",       /* 0x02 */ "eax",
  /* 0x03 */ "cl",      /* 0x04 */ "cx",       /* 0x05 */ "ecx",
  /* 0x06 */ "dl",      /* 0x07 */ "dx",       /* 0x08 */ "edx",
  /* 0x09 */ "bl",      /* 0x0A */ "bx",       /* 0x0B */ "ebx",
  /* 0x0C */ "ah",      /* 0x0D */ "sp",       /* 0x0E */ "esp",
  /* 0x0F */ "ch",      /* 0x10 */ "bp",       /* 0x11 */ "ebp",
  /* 0x12 */ "dh",      /* 0x13 */ "si",       /* 0x14 */ "esi",
  /* 0x15 */ "bh",      /* 0x16 */ "di",       /* 0x17 */ "edi",
};

const char * RMString[24] =
{
/* 8-bit Addressing */ /* 16-bit Addressing */ /* 32-bit Addressing */

  /* 0x00 */ "_",       /* 0x01 */ "bx + si",  /* 0x02 */ "eax",
  /* 0x03 */ "_",       /* 0x04 */ "bx + di",  /* 0x05 */ "ecx",
  /* 0x06 */ "_",       /* 0x07 */ "bp + si",  /* 0x08 */ "edx",
  /* 0x09 */ "_",       /* 0x0A */ "bp + di",  /* 0x0B */ "ebx",
  /* 0x0C */ "_",       /* 0x0D */ "si",       /* 0x0E */ "esp",
  /* 0x0F */ "_",       /* 0x10 */ "di",       /* 0x11 */ "ebp",
  /* 0x12 */ "_",       /* 0x13 */ "bp",       /* 0x14 */ "esi",
  /* 0x15 */ "_",       /* 0x16 */ "bx",       /* 0x17 */ "edi"
};

const char * SegmentRegisterString[24] =
{
/* Segment Registers */

  /* 0x00 */ "es",      /* 0x01 */ "es",       /* 0x02 */ "es",
  /* 0x03 */ "cs",      /* 0x04 */ "cs",       /* 0x05 */ "cs",
  /* 0x06 */ "ss",      /* 0x07 */ "ss",       /* 0x08 */ "ss",
  /* 0x09 */ "ds",      /* 0x0A */ "ds",       /* 0x0B */ "ds",
  /* 0x0C */ "fs",      /* 0x0D */ "fs",       /* 0x0E */ "fs",
  /* 0x0F */ "gs",      /* 0x10 */ "gs",       /* 0x11 */ "gs",
  /* 0x12 */ "??",      /* 0x13 */ "??",       /* 0x14 */ "??",
  /* 0x15 */ "??",      /* 0x16 */ "??",       /* 0x17 */ "??"
};
