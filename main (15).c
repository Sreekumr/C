#include<stdio.h>
#include<string.h>
#define MAX 100
#include<ctype.h>

char * function(char * str)
{
     char* orig_str = str;
    while(*str!='\0'){
      char c = tolower(*str);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && isalpha(c)) {
            *str = toupper(*str);
        }
        str++;
    }
    
    return orig_str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
}


