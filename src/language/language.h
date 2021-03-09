#ifndef __LANGUAGE_H
#define __LANGUAGE_H

#include "../parse_file/parser.h"
#include "instruction/instructionset.h"

typedef struct{

	parser* p;
	instructionset* iset;
	char* (*decodeInstruction)(instruction* instruction, int arguement_type, const void* arguement);
	void (*registerInstruction)(instruction* instruction);
	
}language;

#endif