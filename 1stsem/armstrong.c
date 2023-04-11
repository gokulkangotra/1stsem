#include<stdio.h>
#include<math.h>
int main ()
{
    int num,originalnum,remainder,n=0,result=0,power;
    printf("Please enter the number:  \n");
    scanf("%d",&num);
    originalnum=num;
    while (originalnum!=0){
        originalnum=originalnum/10;
        n++;
    }
    originalnum=num;
    while (originalnum !=0){
        remainder=originalnum%10;
        power=pow(remainder,n);
        result=result+power;
        originalnum=originalnum/10;
    }
    if (result==num){
        printf("The number is an Amstrong number \n");
    }
        else{
        printf("the number is not a Amstrong number \n");
        }
        return 0;
}
