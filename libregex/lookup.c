#include "libregex.h"
#include <stdio.h>
#include <string.h>

void lookup(char phrase[], char filename[]){
   FILE *filepointer;
   char buffer[255];
   filepointer = fopen(filename, "r");
   //if encounters newline or EOF, return only characters up to that
   fgets(buffer, 255, (FILE*)filepointer);//get n-1 chars plus null
   printf("Line: %s\n", buffer);
   fclose(filepointer);
}
