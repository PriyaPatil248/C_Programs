#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int num, var, rem, sum=0, a=0 ;
    printf("Enter a Number : ");
    scanf("%d ",&num);

    var = num;
    while(var !=0)
    {
        var = var/10;
        ++a;
    }

    var = num;
    while (var>0)
    {
        rem = var %10;
        sum = sum + pow(rem,a);
        var = var/10;
    }

    if (sum == sum)
    {
        printf("%d is Armstrong Number ",num);
    }
    else{
        printf("%d is not Armstrong Number ", num);
    }
    return 0;
    
}