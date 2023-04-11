#include<stdio.h>
void main()
{
    int i,num,n,large=0;
    printf("how many number you want to print: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number %d :",i+1);
        scanf("%d",&num);
        if(num>large)
          (large=num);
    }
    printf("largest number is %d", large);

}
