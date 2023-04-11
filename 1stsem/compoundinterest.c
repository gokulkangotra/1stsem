#include<stdio.h>
#include<math.h>
int main()
{
    int Amount,principal,rate,n,Compound_interest;
    printf("Enter the amount of Principal:\n");
    scanf("%d",&principal);
    printf("Enter the value of Rate:\n");
    scanf("%d",&rate);
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    Amount = principal*pow(1+rate/100,n);
    printf("the amount is = %d", Amount);

    Compound_interest = (Amount - principal);
    printf("compound intrest is = %d", Compound_interest);

    return 0;
}



