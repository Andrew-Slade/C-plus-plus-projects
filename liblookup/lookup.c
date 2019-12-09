#include "liblookup.h"
#include <stdio.h>
#include <string.h>

/**
* Check a file for a substring
**/
int lookup(char phrase[], char filename[], int phraseSize){

   FILE *filepointer;
   int match = 0, //is a match?
   startindex = -1, //starting index for substring
   SIZE = 255; //size of buffer
   char buffer[SIZE];
   char firstCharacter = phrase[0];
   int marker = 0; //marker for a full match


   filepointer = fopen(filename, "r"); //opening the file
   while(fgets(buffer, sizeof buffer, filepointer) != NULL){
     //if encounters newline or EOF, return only characters up to that
     //get n-1 chars plus null
     //printf("Line: %s", buffer);
  
     if(firstCharacter == ' '){
        //break conditions
        printf("Empty line");
     }
     else{
        for(int c = 0; c < SIZE; c++){
           //if we have the character, look for the substring
           if(buffer[c] == firstCharacter){
              for(int i = 0; i < phraseSize - 1; i++){
                 if(buffer[c + i] != phrase[i]){
                    marker = 0; //not a match for the word
                 }
                 else{
                    marker = 1; //match for the word
                 }
              }  
              if(marker = 1){
                 printf("Line: %s", buffer);
                 printf("%s is in the line\n\n", phrase);
              }
           }
        } 
     }
   }
   fclose(filepointer);//close the file
 return 0;
}//end lookup
