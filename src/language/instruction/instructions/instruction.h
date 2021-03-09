#ifndef __INSTRUCTION_H
#define __INSTRUCTION_H

#include <stdint.h>

enum ARGUEMENT_TYPES {

	INT,
	STRING

}

typedef struct{

	uint8_t* name;
	uint16_t identifier;
	uint8_t arguement_count;
	uint32_t arguement_type;
	
}instruction;

void initInstruction(instruction* i, uint8_t* name, uint16_t identifier, uint8_t arguement_count, uint32_t arguement_type);

#endif