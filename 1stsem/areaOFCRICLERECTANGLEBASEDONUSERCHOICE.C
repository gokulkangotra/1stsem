#include<stdio.h>
#define PI 3.14
int main()
{
    int choice,radius,side,area,perimeter,length,breadth;
    printf("1.circle\n2.square\n3.Rectangle");
    printf("\nEnter the choice\n");
    scanf("%d",&choice);

if (choice==1){
        printf("Enter the radius of circle\n");
        scanf("%d",&radius);
        area=PI*radius*radius;
        printf("The area of circle is %d",area);
    }

else if (choice==2){
        printf("Enter the side of the square\n");
        scanf("%d",&side);
        area=side*side;
        printf("The area of square is %d",area);
    }

else if (choice==3){
         printf("Enter the length of the rectangle: \n");
         printf("Enter the breadth of the rectangle: \n");
         scanf("%d%d",&area);
         area=length*breadth;
         printf("THe area of the Rectangle is %d",area);
    }
         return 0;
}

