#include<stdio.h>
#include<math.h>
#define MAX 100

int function(int num)
{
   int temp,temp2,n=0,rem,sum=0;
   temp = num;
   while(temp>0){
       temp/=10;
       n++;
   }
   temp2=num;
   while(num>0){
       rem=num%10;
       num = num/10;
       sum+=pow(rem,n);
   }
   if(sum==temp2)
    return 1;
    else 
     return 0;
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}



