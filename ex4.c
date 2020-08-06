#include <stdio.h> 
#include <stdlib.h>

int main(){
  int i,a;
  int heads=0,tails=0;
  
  
  printf("Tossing a coin...\n");
  
  for(i=0;i<3;i++){
    a=rand();
    if(a%2==0){
      printf("Round %d: Head\n,i+1);
             heads++;
             }
             else{
               printf("Round %d: Tail\n",i+1);
               tails++;
               }
             }
             
             printf("Heads: %d, Tails: %d\n", heads, tails);
             
             if(heads>tails){
               printf("You won");
               }
             else printf("You lose");
             
             return 0;
             }
