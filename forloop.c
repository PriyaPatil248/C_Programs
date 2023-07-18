#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i = 1; i <= n ; i++)
    {
        sum += i;
        printf("%d \n",i);
    
    }

    printf("Sum is %d",sum);
    return 0 ;
}