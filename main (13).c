#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char * str)
{
   
    
    int len = strlen(str);
    int i,j;
    for( i=0,j=len-1 ; i<j ; i++,j-- ){
        if(str[i] != str[j] ){
            return 0;
        }
    }
    return 1;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
   
    size_t len = strlen(text);
    if(len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }
    int out=function(text);
    printf("%d",out);
}

