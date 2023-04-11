#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("the swapping of number is %d %d",a,b);
}
