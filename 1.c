#include <stdio.h>
#include <stdlib.h>
 /* Kevin Chen
 October 12th, 2021 */

int countVowels(char* str){
   int count = 0;
   int ind = 0;
   while (*(str+ind) != '\0'){
        if (*(str+ind) == 'a' ||*(str+ind) == 'e' ||*(str+ind) == 'o' ||*(str+ind) == 'i' ||*(str+ind) == 'u'||*(str+ind)=='A'
        ||*(str+ind) == 'E' ||*(str+ind) == 'I' ||*(str+ind) == 'O' ||*(str+ind) == 'U') {
           count++;
        }
        if (*(str+ind) == 'a'){
            *(str+ind) = 'A';
        }
        else if (*(str+ind) == 'A'){
            *(str+ind) = 'a';
        }
        else if (*(str+ind) == 'e'){
            *(str+ind) = 'E';
        }
        else if (*(str+ind) == 'E'){
            *(str+ind) = 'e';
        }
        else if (*(str+ind) == 'i'){
            *(str+ind) = 'I';
        }
        else if (*(str+ind) == 'I'){
            *(str+ind) = 'i';
        }
        else if (*(str+ind) == 'o'){
            *(str+ind) = 'O';
        }
        else if (*(str+ind) == 'O'){
            *(str+ind) = 'o';
        }
        else if (*(str+ind) == 'u'){
            *(str+ind) = 'U';
        }
        else if (*(str+ind) == 'U'){
            *(str+ind) = 'u';
        }
        else{
            *(str+ind) = *(str+ind);
        }
        ind++;
        }
        printf("%s", str);
        return count;  
    }