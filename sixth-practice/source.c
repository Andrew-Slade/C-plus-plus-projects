/* fifth practice - good practice, simple calculator*/
#include <stdio.h>
#include <stdlib.h>


/**
* A simple caclulator, does not work with parenthesis 
* Input example: ./source 1 x 4 + 5 - 2 / 5
**/
int main(int argc, char *argv[]){
   double iterator_a = 0.0, static_b = 0.0;//iterator that goes through arguments,variable that holds the answer
   char op = ' ';//operation
   int n = 1;//counter
   for(; n < argc; n++){//for the count of arguments do:
    if(n % 2 == 1){//should be numbers on every odd place of arguments 
       iterator_a = atof(argv[n]);//go through each argument
       if(op == ' '){static_b = iterator_a;}
       else if(op == '+'){static_b += iterator_a;}
       else if(op == '-'){static_b -= iterator_a;}
       else if(op == '*'){static_b *= iterator_a;}
       else if(op == '/'){static_b /= iterator_a;}
    }//end if
    else{//argument place is even, should be an operator
       if(*argv[n] == '+'){ op = '+';} //addition
       else if(*argv[n] == '-'){op = '-';}//subtraction
       else if(*argv[n] == 'x'){op = '*';}//multiplication
       else if(*argv[n] == '/'){op = '/';}//division
       else{return 1;}//broken program
    }//end else
   }//end for
   printf("Answer: %lf\n", static_b);//print out the answer
 return 0;//return good
}
