#include<stdio.h>
int main()
{
    int choice;
    float area;
    float radius,side,length,breadth;
    printf("**menu for area of figures**");
    printf("\n 1.circle");
    printf("\n 2.square");
    printf("\n 3. rectangle");
    printf("\n which area you want to calculate");
    scanf("%f",&choice);
if     (choice==1){

        printf("enter radius: \n");
        scanf("%f",radius);
        area=3.14*radius*radius;
        printf("area of circle is %f",area);}

else if (choice==2){

        printf("enter the side of square \n");
        scanf("%f",&side);
        area=side*side;
        printf("area of square is %f",area);}

else if (choice==3);{

        printf("enter the length and breadth of the rectangle \n");
        scanf("%f%f",&length,&breadth);
        area=length*breadth;
        printf("area of rectangle is %f",area);}
else {

        printf("\n enter correct choice");}

    return 0;
}
