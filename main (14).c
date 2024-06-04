#include<stdio.h>
#define MAX 100

char * function(char * str)
{
    int i;
     for(i=0;str[i]!='\0';i++) {
        if (str[i] == ' ') {
            str[i] = ',';            
        }
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
    
}


