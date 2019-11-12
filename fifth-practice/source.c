/* fifth practice - tiny programs - >1000 char calculator*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
 double a = 0.0, b = 0.0;char op = ' '; int n = 1; char o[4] = {'+', '-', '*', '/'};
 for(; n < argc; n++){if(n % 2 == 1){ a = atof(argv[n]);
    if(op == ' '){b = a;}else if(op == o[0]){b += a;}else if(op == o[1]){b -= a;}
    else if(op == o[2]){b *= a;}else if(op == o[3]){b /= a;}else{}
    }else{if(*argv[n] == o[0]){ op = o[0];} else if(*argv[n] == o[1]){op = o[1];}
          else if(*argv[n] == 'x'){op = o[2];}else if(*argv[n] == o[3]){op = o[3];}}
 }printf("Answer: %lf\n", b);return 0;}
