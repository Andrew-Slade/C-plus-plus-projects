#include "liblookup.h"
#include <stdio.h>

/*
 run using ./applicaiton_name (phrase) (file)
*/
int main(int argc, char *argv[]){
   if(argc == 3){
      lookup(argv[1], argv[2], (sizeof(argv[1])/sizeof(char)));
   }
   else{
     printf("Not enough arguments\n");
     return 2;//return fail on not enough args
   }
 return 0;
}
