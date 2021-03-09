#include <stdio.h>
#include "parse_file/parser.h"

int main(void){

	parser* p = init_parser();

	parse_file("text.txt", p);

	for(int i = 0; i < p->word_count; i++){
		printf("%s", *(p->contents + i));
	}

	return 0;
}