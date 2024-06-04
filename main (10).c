#include<stdio.h>
#define MAX 100

int function(char * str, char character)
{
    int count = 0;
    while (*str != '\0') {
        if (*str == character) {
            count++;
        }
        str++;
    }
    return count;
   
}


void main()
{   
    char ch,text[MAX];
    ch=getchar();
    fgets(text, sizeof(text), stdin);
    
    int out=function(text,ch);
    printf("%d",out);
}


