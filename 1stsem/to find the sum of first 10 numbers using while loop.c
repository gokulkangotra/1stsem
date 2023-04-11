#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("enter a integer");
    scanf("%d",&a);
    i=0;
    while(i<=a)
    {
        sum+=i;
        ++i;
    }
    printf("sum=%d",sum);
    return 0;

}

