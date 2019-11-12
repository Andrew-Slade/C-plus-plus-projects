/* fifth practice - tiny programs - >600 char calculator*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
 double a = 0.0, b = 0.0;char op = ' '; int n = 1;
for(; n < argc; n++){if(n % 2 == 1){ a = atof(argv[n]);
   if(op == ' '){b = a;}else if(op == '+'){b += a;}else if(op == '-'){b -= a;}
   else if(op == '*'){b *= a;}else if(op == '/'){b /= a;}else{}
  }else{if(*argv[n] == '+'){ op = '+';} else if(*argv[n] == '-'){op = '-';}
        else if(*argv[n] == 'x'){op = '*';}else if(*argv[n] == '/'){op = '/';}}
  }printf("Answer: %lf\n", b);return 0;}
