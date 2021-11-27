#include <stdio.h>
#include <stdlib.h>
 

int isdiv35(int n){
   if (n%15 == 0){
       return 3;
   } 
   else if(n%5 == 0){
       return 2;
   } 
   else if(n%3 == 0){
       return 1;
   } 
   else{
       return 4;
   }
}
 
int main(int argc, char *argv[])
{   
   if (argc != 3){
       printf("error");
       return 0;
   }
   else {
       int arg1 = atoi(argv[1]);
       int arg2 = atoi(argv[2]);
       if (arg1 <= arg2){
           int i;
           for (i = arg1; i < arg2; i++){
               printf("%d", isdiv35(i));
           }
       }
   }
   return 0;
}
