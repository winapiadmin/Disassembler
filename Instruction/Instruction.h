#ifndef INSTRUCTION_HEADER
#define INSTRUCTION_HEADER

#include "./InstructionSchemas.h"
#include "../DisassemblerTypes.h"
//longest opcode is 15 bytes, but reduced due to: most instructions are less than 12
/*
    16-bit: LOCK MOV DWORD PTR ES:[EBX+12345678], 12345678
    64-bit: mov reg, FFFFFFFFFFFFFFFFh
*/
#define MAXLEN 15
class Operator;
class Operand;
class ModRegRM;

class Instruction
{
	friend class Operator;
	friend class Operand;
	friend class ModRegRM;

public:
	Instruction() {};
	Instruction(byte * opcode, int * index);

	~Instruction();

	char * GetString();

private:
	//Opcode buffer
	int * index = nullptr;
	byte * opcode = nullptr;

	//Schema information
	InstructionSchema schema = EmptyInstructionSchema;
	Prefix prefixes = Prefix::_;

	//Optional fields
	ModRegRM * modRegRM = nullptr;

	//Operator
	Operator * operator_ = nullptr;

	//Operands
	Operand ** operands = nullptr;
	int numberOfOperands = 0;

	//Hexadecimal opcode values
	byte * value = nullptr;
	int valueSize = 0;

	//Testers
	bool HasPrefix();
	bool HasSegmentPrefix();
	bool HasAddressPrefix();
	bool HasOperandPrefix();
	bool HasGroup();

	//Setters
	void SetSchema();
	void SetPrefix();
	void SetModRegRM();
	void SetGroupSchema();
	void SetOperator();
	void SetOperand();
	void SetValue(int startingIndex);

	//Getters
	const char * GetSegmentPrefixString();
	char * GetOperandString(int operand);
	const char * GetOperatorString();
	char * GetOperandsString();
	char * GetValueString();
};

#endif
