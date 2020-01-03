#include "interpreter.h"
#include <stdio.h>



int main(int argc, char* argv[]){

   if(argc <= 1){
     printf("Please enter a file\n");
   }
   else if(argc == 2){
     printf("File name is: %s\n", argv[1]);
     FILE *readfile = fopen(argv[1], "r");
     if(readfile != NULL){
       parse(readfile);
       fclose(readfile);
     }
     else{
       printf("File %s does not exist...\n", argv[1]);
       return 1;
     }
   }
   else{
     printf("Please enter only a single file\n");
   }
  /* char msg[] = "MESSAGE", err[] = "ERROR";
   out(msg, "Starting interpreter");
   out(msg, "Interpretation completed");
  */
 return 0;
}
