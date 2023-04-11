#include<stdio.h>
int main()
{
    int n, first = 0,second = 1, third,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
     printf("first %d terms of Fibonacci series are :- \n",n);

     for (i=2; i<=n; i++)
     {
         third = first+second;
         printf("%d",third);
         first=second;
         second=third;
     }
     printf("%d\n",third);

     return 0;
}
