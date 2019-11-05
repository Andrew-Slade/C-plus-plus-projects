/* foruth practice - fibonacci recursion */
#include <stdio.h>

void fibonacci_sequencer(int phi, int psi, int iterator, int size);//template

/*
 Main
*/
int main(void){
   int phi_a = 0, phi_b = 1, iterator = 0, fibonacci_size = 1;
   fibonacci_size = 20;//size of fibonacci recursion
   fibonacci_sequencer(phi_a, phi_b, iterator, fibonacci_size);
   printf("\n");
 return 0;
}

/*
 Fibonacci Sequencer
 Takes: (int) place n, (int) place n+1, (int) iterator for recursion, (int) size of recursion
*/
void fibonacci_sequencer(int phi, int psi, int iterator, int size){
   if(iterator >= size){ return; }//base case
   else if(iterator < size){//n cases
      printf("%d ", phi);//print fibonacci numbers
      iterator++;//increase iterator
      fibonacci_sequencer(psi, psi+phi, iterator, size);//recurse fibonacci numbers
   } 
 return;
}
