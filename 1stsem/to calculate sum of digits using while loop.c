#include<stdio.h>
void main()
{
    int number,remainder,sum=0;
    printf("enter the number \n");
    scanf("%d",&number);
    while(number>0)
    {
        remainder = number%10;
        sum = sum+remainder;
        number = number/10;
    }
    printf("the sum of digits of number is %d \n",sum);
}
