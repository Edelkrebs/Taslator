#ifndef __PARSER_H
#define __PARSER_H

#include <stdio.h>

typedef struct{
	FILE* file;
	char** contents;
	int word_count;
}parser;

parser* init_parser();
void parse_file(const char* file_path, parser* parser);

#endif