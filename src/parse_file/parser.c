#include "parser.h"
#include <stdlib.h>

parser* init_parser(){
	parser* p = (parser*)malloc(sizeof(parser));
	p->contents = (char**)malloc(1024);
	return p;
}

void parse_file(const char* file_path, parser* parser){

	parser->file = fopen(file_path, "r");

	char c;
	char* word = (char*)malloc(256);
	int index = 0;
	int word_index = 0;
	while((c = fgetc(parser->file)) != EOF){
		if(c == ' ' || c == '\n'){
			*(word + index) = '\0';
			*(parser->contents + word_index) = word;
			word = (char*)malloc(256);
			word_index++;
			index = 0;
			continue;
		}else{
			*(word + index) = c;
		}
		index++;
	}
	parser->word_count = word_index;	

	fclose(parser->file);

}