/* third practice -- more advanced techniques */
#include <stdio.h>
#include <string.h>

int main(void){
  char *immutable = "immutable string";
  char mutable[] = "mutable string";
  int len1 = 0;
  int len2 = 0;
  len1 = strlen(immutable);
  len2 =strlen(mutable);
  
  printf("Length of %s is: %d \n", immutable, len1);//print string length
  printf("Length of %s is %d \n", mutable, len2);//print string length
  
  int same = 1;//temporary
  same = strncmp(immutable, mutable,6);//should return >0
  printf("This number should not be 0: %d \n", same);
  char addition[] = "is ";//added to front
  char mutcopy[] = "mutable string";//added to end
  char mutcopycopy[] = "mutable string ";//added to front
  char addcopy[] = "is";//added to end

  strncat(addition, mutcopy, strlen(mutcopy)); //append mutcopy to addition
  strncat(mutcopycopy, addcopy, strlen(addcopy)); //append addcopy to mutcopycopy
  
  printf("String 1: %s \n", addition);
  printf("String 2: %s \n", mutcopycopy);
 return 0;
}
