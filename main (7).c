#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int n=0,m=0,i;
   for(i=0;i<lim;i++){
       if(arr[i]==0){
           n++;
       }
       else if(arr[i]==1){
           m++;
       }
   }
   if(m==n)
   {
       return 0;
   }
   else if(m>n){
        return 1;
   }
   else
      return -1;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}


