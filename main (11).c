#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int function(char * str)
{
    int count=0;
   while(*str!= '\0'){
    char c = tolower(*str);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        count++;
    }
    str++;
   }
   return count;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}



