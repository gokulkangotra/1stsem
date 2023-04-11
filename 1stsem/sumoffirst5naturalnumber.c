#include<stdio.h>
void main()
{
    int n,i,sum=0,average;
    printf("enter any integer:\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    sum=sum+i;
    printf("the sum of given number is %d and average of sum  is %d",sum,sum/n);
    return 0;
}
