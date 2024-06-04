#include<stdio.h>
#define MAX 30

int findSum(int num){
    int sum = 0;
    while(num > 0){
        sum += num%10;
        num = num/10;
    }
    return sum;
}
int function(int arr[],int lim)
{
    int hsum = 0,i,sum,number;
    for(i = 0; i< lim;i++){
        sum = findSum(arr[i]);
        if(hsum < sum){ 
            hsum = sum;
            number= arr[i];
        }
    }
    return number;
    
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


