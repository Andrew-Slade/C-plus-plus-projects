/* second practice -- basic input in C and breaking it */
#include <stdio.h>

int main(int argc, char *argv[]){
 int integer = 0;
 char str[40];

 printf("Please enter an integer: ");
 scanf("%d", &integer); //scan takes symbolic and address
 printf("Please enter a string: ");
 scanf("%s", str);
 printf("You entered: %d and %s.\n", integer, str);

 return 0;
}
