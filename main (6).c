#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
    int i,temp,high; 
     high=arr[0];
    
   for(i=1;i<lim;i++)
   {
       if(arr[i]>high){
           high=arr[i];
       }
     }
     return high;
   
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int max=function(A,n);    
    
    printf("%d",max);
    return 0;
}



