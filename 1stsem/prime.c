#include<stdio.h>
#include<math.h>
void main()
{
    int num,count=0,i=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while (i<=num){
    if (num%i==0){
        count++;
        }
    i++;
}
   if(count==2)
        printf("the number is prime");
   else
        printf("The number is not prime");
}
