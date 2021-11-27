#include <stdio.h>
#include <string.h>


int main (int argc, char* argv[]){
   char* str = argv[1];
   char* except = argv[2];
   char* dup = argv[3];

   while(*str != '\0'){
       char C = *str;
       if (C<97 || C>122){
           printf("error");
           return 0;
       }
       if(strchr(except, C) == NULL){
           if(strchr(dup, C) == NULL){
               putchar(C);
           }
           else{
               putchar(C);
               putchar(C);
           }
       }
       str++;
   }
}
