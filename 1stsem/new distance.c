#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    float a,b,distance;
    printf("\n Enter the x quardrant of point a:\n");
    scanf("%f",&x1);
    printf("\n Enter the y quardrant of point a:\n");
    scanf("%f",&y1);
    printf("\n Enter the x quardrant of point b:\n");
    scanf("%f",&x2);
    printf("\n Enter the y quardrant of point b:\n");
    scanf("%f",&y2);
    distance=sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("Euclid's distance between a and b=%f",distance);
    return 0;
}
