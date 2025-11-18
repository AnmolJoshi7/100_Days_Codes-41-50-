//Write a program to check if a number is a strong number.
#include<stdio.h>
int main(){
    int i,n,r,fact,sum=0,strong;
    printf("enter number:");
    scanf("%d",&n);
    strong=n;
    while(n!=0){
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(strong==sum)
        printf("strong number");
        else
        printf("not a strong number");
    return 0;
}