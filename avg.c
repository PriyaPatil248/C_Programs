#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter 1st Value");
    scanf("%d",&a);
    printf("Enter 2nd Value");
    scanf("%d",&b);
    printf("Enter 3rd Value");
    scanf("%d",&c);

    int sum = a + b + c;
    printf("Sum is : %d",sum);

    float Avg = sum/3;

    printf("\n Average of given Value is %f\n",Avg);
    return 0;

}