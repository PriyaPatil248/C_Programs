#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n % n != 0  || n )
    {
        printf("%d Number is Prime Number",n);
    }
    else
    {
        printf("%d Number is Not Prime Number",n);
    }

    return 0 ;
}