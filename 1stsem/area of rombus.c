#include<stdio.h>
int main()
{
    int diagonal1,diagonal2,area;
    printf("Enter the diagonal 1\n");
    scanf("%d",&diagonal1);
    printf("Enter the diagonal2\n");
    scanf("%d",&diagonal2);
    area=0.5*diagonal1*diagonal2;
    printf("The area of the rombus is %d",area);
}
