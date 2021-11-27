#include <stdio.h>
#include <string.h>


int reorder(char **s1, char **s2, char **s3){
    int len1 = strlen(*s1);
    int len2 = strlen(*s2);
    int len3 = strlen(*s3);
    char ** temp1 = s1;
    char ** temp2 = s2;
    char ** temp3 = s3;

    if (len1 == len2 && len2 == len3){
        printf("All 3 are equal length");
        return 3;
    }
    else if (len1 == len2 || len2 == len3 || len1 == len3){
        printf("Two are equal length");
        return 2;
    }
    else {
        printf("They are all different lengths");
        if(len1 > len2 && len1 > len2){
            if (len3 > len2){
                s2 = temp3;
                s3 = temp2;
            }
        }
        else if(len2 > len1 && len2 > len3){
            s1 = temp2;
            if (len1 > len3){
                s2 = temp1;
            }
            else{
                s3 = temp1;
                s2 = temp3;
            }
        } 
        else if(len3 > len1 && len3 > len2){
            s1 = temp3;
                if (len2 > len1){
                    s3 = temp1;
                } 
                else{
                    s3 = temp2;
                    s2 = temp1;
                }
        }
        return 1;
    } 
}