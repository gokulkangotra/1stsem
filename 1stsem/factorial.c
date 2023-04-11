#include<stdio.h>
void main()
{
    int i,fact=1,number;
    printf("enter any number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
            fact=fact*i;
    }


        printf("factorial of %d is %d",number,fact);
}


