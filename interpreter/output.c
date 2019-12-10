#include "interpreter.h"
#include <stdio.h>

/**
* An output function, designed to make general output cleaner
* Takes: a character array that is a flag
*        a character array that is a message
**/
void out(char flag[], char message[]){
   printf("%s: %s\n", flag, message);
}
