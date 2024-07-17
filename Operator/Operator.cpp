#include "./Operator.h"
#include "./OperatorStrings.h"
//#include <string.h>
#include <stdlib.h>
#include <stdio.h>
Operator::Operator(Instruction * instruction) : instruction(instruction)
{
  schema = instruction->schema.operatorSchema;
}

const char * Operator::GetString()
{
  if (schema.mnemonic != Mnemonic::_)
    return MnemonicString[(int)schema.mnemonic];
  else{
    char *s=(char*)malloc(7);
    sprintf(s,"db %02Xh",this->instruction->value[0]);
    return s;
  }
}

