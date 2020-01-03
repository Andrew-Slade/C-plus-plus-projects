#include "interpreter.h"
#include <stdio.h>

void parse_io(FILE); 

void parse(FILE *filepointer){
  printf("Parsing file...\n");
  parse_io(filepointer);
}

void parse_io(FILE *file){

}
