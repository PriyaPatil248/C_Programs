#include<stdio.h>
int main(){
    int n;
    printf("Enter a No for Table : ");
    scanf("%d",&n);

    int no =0;
    for(int i = 1; i<=10 ; i++)
    {
        no = n*i;
        printf("%d \n",no);
    }

    return 0;
}