#include <stdio.h>

main(){
    int c;
    int space = 0;

    while((c = getchar()) != EOF)
    {
        if(c != ' '){
            putchar(c);
            space = 0;
        }
        
        if(c == ' ' && space !=1)
        {
                putchar(c);
                space = 1;
        }
    }
}