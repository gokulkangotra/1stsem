#include<stdio.h>

int main()
{
    float  Principal,Rate,Time,simple_interest;
    printf("\n Enter the value of Principal:\n");
    scanf("%f",&Principal);
    printf("\n Enter the value of Rate:\n");
    scanf("%f",&Rate);
    printf("\n Enter the value of Time:\n");
    scanf("%f",&Time);
    simple_interest = (Principal*Rate*Time/100);
    printf("THE Simple Intrest IS = %f", simple_interest);
    return 0;
}
