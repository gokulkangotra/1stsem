#include<stdio.h>
int main()
{
    int a,b,remainder;
    printf("Enter the value of a and b ");
    scanf("%d%d",&a,&b);
    remainder=a%b;
    printf("remainder of a and b is %d",remainder);
    return 0;

}
