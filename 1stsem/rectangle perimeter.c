#include<stdio.h>
int main()
{
    int a,b,perimeter;
    printf("enter the length and breadth \n");
    scanf("%d%d",&a,&b);
    perimeter=2*(a+b);
    printf("the perimeter of the rectangle is %d",perimeter);
    return 0;

}
