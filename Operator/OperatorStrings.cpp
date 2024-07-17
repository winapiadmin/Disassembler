#include "./OperatorStrings.h"

const char * MnemonicString[154] =
{
/* 0x00 */ "_",      //No Operator

/* Arithmetic Instructions */

/* 0x01 */ "add",    //Add
/* 0x02 */ "sub",    //Subtract
/* 0x03 */ "mul",    //Unsigned multiply
/* 0x04 */ "div",    //Unsigned divide
/* 0x05 */ "adc",    //Add with carry
/* 0x06 */ "sbb",    //Integer subtraction with borrow
/* 0x07 */ "imul",   //Signed multiply
/* 0x08 */ "idiv",   //Signed divide
/* 0x09 */ "inc",    //Increment by 1
/* 0x0A */ "dec",    //Decrement by 1

/* Logical Instructions */

/* 0x0B */ "not",    //One's complement negation
/* 0x0C */ "neg",    //Two's complement negation
/* 0x0D */ "and",    //Logical AND
/* 0x0E */ "or",     //Logical OR
/* 0x0F */ "xor",    //Logical exclusive OR

/* Shift Instructions */

/* 0x10 */ "rol",    //Rotate left
/* 0x11 */ "ror",    //Rotate right
/* 0x12 */ "rcl",    //Rotate left with carry
/* 0x13 */ "rcr",    //Rotate right with carry
/* 0x14 */ "shl",    //Shift logical left
/* 0x15 */ "shr",    //Shift logical right
/* 0x16 */ "sal",    //Shift arithmetic left
/* 0x17 */ "sar",    //Shift arithmetic right

/* Push Instructions */

/* 0x18 */ "push",   //Push word", doubleword", or quadword onto the stack
/* 0x19 */ "pusha",  //Push all general-purpose registers
/* 0x1A */ "pushad", //Push all general-purpose registers
/* 0x1B */ "pushf",  //Push FLAGS register onto the stack
/* 0x1C */ "pushd",  //Push EFLAGS register onto the stack
/* 0x1D */ "pushq",  //Push RFLAGS reigster onto the stack

/* Pop Instructions */

/* 0x1E */ "pop",    //Pop a value from the stack
/* 0x1F */ "popa",   //Pop all general-purpose registers
/* 0x20 */ "popad",  //Pop all general-purpose registers
/* 0x21 */ "popf",   //Pop stack into FLAGS register
/* 0x22 */ "popd",   //Pop stack into EFLAGS register
/* 0x23 */ "popq",   //Pop stack into RFLAGS register

/* Move Instructions */

/* 0x24 */ "xchg",   //Exchange register/memory with register
/* 0x25 */ "mov",    //Move
/* 0x26 */ "movs",   //Move data from string to string
/* 0x27 */ "movsb",  //Move data from string to string
/* 0x28 */ "movsw",  //Move data from string to string
/* 0x29 */ "movsd",  //Move data from string to string
/* 0x2A */ "movsq",  //Move data from string to string

/* Jump Instructions */

/* 0x2B */ "jmp",    //Jump
/* 0x2C */ "ja",     //Jump if above (CF = 0 and ZF = 0)
/* 0x2D */ "jae",    //Jump if above or equal (CF = 0)
/* 0x2E */ "jb",     //Jump if below (CF = 1)
/* 0x2F */ "jbe",    //Jump if below or equal (CF = 1 or ZF = 1)
/* 0x30 */ "jc",     //Jump if carry (CF = 1)
/* 0x31 */ "je",     //Jump if equal (ZF = 1)
/* 0x32 */ "jg",     //Jump if greater (ZF = 0 and SF = OF)
/* 0x33 */ "jge",    //Jump if greater or equal (SF = OF)
/* 0x34 */ "jl",     //Jump if less (SF != OF)
/* 0x35 */ "jle",    //Jump if less or equal (ZF = 1 or SF != OF)
/* 0x36 */ "jna",    //Jump if not above (CF = 1 or ZF = 1)
/* 0x37 */ "jnae",   //Jump if not above or equal (CF = 1)
/* 0x38 */ "jnb",    //Jump if not below (CF = 0)
/* 0x39 */ "jnbe",   //Jump if not below or equal (CF = 0 and ZF = 0)
/* 0x3A */ "jnc",    //Jump if if not carry (CF = 0)
/* 0x3B */ "jne",    //Jump if not equal (ZF = 0)
/* 0x3C */ "jng",    //Jump if not greater (ZF = 1 or SF != OF)
/* 0x3D */ "jnge",   //Jump if not greater or equal (SF != OF)
/* 0x3E */ "jnl",    //Jump if not less (SF = OF)
/* 0x3F */ "jnle",   //Jump if not less or equal (ZF = 0 and SF = OF)
/* 0x40 */ "jno",    //Jump if not overflow (OF = 0)
/* 0x41 */ "jnp",    //Jump if not parity (PF = 0)
/* 0x42 */ "jns",    //Jump if not sign (SF = 0)
/* 0x43 */ "jnz",    //Jump if not zero (ZF = 0)
/* 0x44 */ "jc",     //Jump if overflow (OF = 1)
/* 0x45 */ "jp",     //Jump if parity (PF = 1)
/* 0x46 */ "jpe",    //Jump if parity even (PF = 1)
/* 0x47 */ "jpo",    //Jump if parity odd (PF = 0)
/* 0x48 */ "js",     //Jump if sign (SF = 1)
/* 0x49 */ "jz",     //Jump if zero (ZF = 1)
/* 0x4A */ "jcxz",   //Jump if CX register is 0
/* 0x4B */ "jecxz",  //Jump if ECX register is 0

/* Procedure Instructions */

/* 0x4C */ "call",   //Call procedure
/* 0x4D */ "ret",    //Return from procedure
/* 0x4E */ "enter",  //Make stack frame for procedure parameters
/* 0x4F */ "leave",  //High level prodecure exit

/* Interrupt Instructions */

/* 0x50 */ "int",    //Call to interrupt prodedure
/* 0x51 */ "int",   //Call to interrupt procedure
/* 0x52 */ "iret",   //Interrupt return
/* 0x53 */ "iretd",  //Interrupt return
/* 0x54 */ "iretq",  //Interrupt return

/* Input Instructions */

/* 0x55 */ "in",     //Input from port
/* 0x56 */ "ins",    //Input from port to string
/* 0x57 */ "insb",   //Input from port to string
/* 0x58 */ "insw",   //Input from port to string
/* 0x59 */ "insd",   //Input from port to string

/* Output Instructions */

/* 0x5A */ "out",    //Output to port
/* 0x5B */ "outs",   //Output string to port
/* 0x5C */ "outsb",  //Output string to port
/* 0x5D */ "outsw",  //Output string to port
/* 0x5E */ "outsd",  //Output string to port

/* Conversion Instructions */

/* 0x5F */ "cbw",    //Convert byte to word
/* 0x60 */ "cwde",   //Convert word to doubleword
/* 0x61 */ "cdqe",   //Convert doubleword to quadword
/* 0x62 */ "cwd",    //Convert word to doubleword
/* 0x63 */ "cdq",    //Convert doubleword to quadword
/* 0x64 */ "cqo",    //Convert quadword to double-quadword

/* Loop Instructions */

/* 0x65 */ "loopne", //Decrement count", jump if count != 0 and ZF = 0
/* 0x66 */ "loopnz", //Decrement count", jump if count != 0 and ZF = 0
/* 0x67 */ "loope",  //Decrement count", jump if count != 0 and ZF = 1
/* 0x68 */ "loopz",  //Decrement count", jump if count != 0 and ZF = 1
/* 0x69 */ "loop",   //Decrement count", jump if count != 0

/* ASCII Adjust Instructions */

/* 0x6A */ "aam",    //ASCII adjust AX after multiply
/* 0x6B */ "aad",    //ASCII adjust AX before division
/* 0x6C */ "aaa",    //ASCII adjust after addition
/* 0x6D */ "aas",    //ASCII adjust AL after subtraction

/* Decimal Adjust Instructions */

/* 0x6E */ "daa",    //Decimal adjust AL after addition
/* 0x6F */ "das",    //Decimal adjust AL after subtraction

/* Compare Instructions */

/* 0x70 */ "test",   //Logical compare
/* 0x71 */ "cmp",    //Compare two operands
/* 0x72 */ "cmps",   //Compare string operands
/* 0x73 */ "cmpsb",  //Compare string operands
/* 0x74 */ "cmpsw",  //Compare string operands
/* 0x75 */ "cmpsd",  //Compare string operands

/* Flag Instructions */

/* 0x76 */ "cmc",    //Complement carry flag
/* 0x77 */ "clc",    //Clear carry flag
/* 0x78 */ "stc",    //Set carry flag
/* 0x79 */ "cli",    //Clear interrupt flag
/* 0x7A */ "sti",    //Set interrupt flag
/* 0x7B */ "cld",    //Clear direction flag
/* 0x7C */ "std",    //Set direction flag

/* Load String Instructions */

/* 0x7D */ "lods",   //Load string
/* 0x7E */ "lodsb",  //Load string
/* 0x7F */ "lodsw",  //Load string
/* 0x80 */ "lodsd",  //Load string
/* 0x81 */ "lodsq",  //Load string

/* Scan String Instructions */

/* 0x82 */ "scas",   //Scan string
/* 0x83 */ "scasb",  //Scan string
/* 0x84 */ "scasw",  //Scan string
/* 0x85 */ "scasd",  //Scan string
/* 0x86 */ "scasw",  //Scan string

/* Store String Instructions */

/* 0x87 */ "stos",   //Store string
/* 0x88 */ "stosb",  //Store string
/* 0x89 */ "stosw",  //Store string
/* 0x8A */ "stosd",  //Store string
/* 0x8B */ "stosq",  //Store string

/* Obstruction Instructions */

/* 0x8C */ "hlt",    //Halt
/* 0x8D */ "wait",   //Wait
/* 0x8E */ "fwait",  //Wait
/* 0x8F */ "nop",    //No operation
/* 0x90 */ "pause",  //Spin loop hint

/* Pointer Instructions */

/* 0x91 */ "les",    //Load far pointer
/* 0x92 */ "lds",    //Load far pointer

/* Table Instructions */

/* 0x93 */ "xlat",   //Table look-up translation
/* 0x94 */ "xlatb",  //Table look-up translation

/* FLAGS Instructions */

/* 0x95 */ "sahf",   //Store AH register into FLAGS
/* 0x96 */ "lahf",   //Load FLAGS into AH

/* Effective Address Instruction*/

/* 0x97 */ "lea",    //Load effective address

/* Array Instruction */

/* 0x98 */ "bound",  //Check array index against bounds

/* Segment Instruction */

/* 0x99 */ "arpl",   //Adjust RPL field of segment selector
};
