#include<stdio.h>

int fun(int num)
{
    int h=0;int l=0;
    while(num>0){
        l=num%10;
        if(l>h){
            h=l;
        }
        num=num/10;
    }
    return h;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=fun(num);
    printf("%d",result);
    return 0;
}


