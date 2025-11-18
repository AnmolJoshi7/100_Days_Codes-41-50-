//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("perfect number");
        else
        printf("not a perfect number");
    return 0;
}