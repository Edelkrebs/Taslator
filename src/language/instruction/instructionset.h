#ifndef __INSTRUCTIONSET_H
#define __INSTRUCTIONSET_H

#include "instruction/instruction.h"

typedef struct{

	instruction** instructions;
	int instruction_count;
	
}instructionset;

void initInstructionset(instructionset* set, instruction* i);

#endif