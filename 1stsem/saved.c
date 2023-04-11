#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,distance;
    printf("enter the value of x1,x2,y1,y2");
    scanf("%f%f%f%f",&x1,&y2,&x2,&y1);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance between a and b is=%f",distance);
}
