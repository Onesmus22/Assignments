#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char m[50];
    printf("enter domestic animals m here\n");
    scanf("%s",&m);

    char n[50] ;
    printf("enter wild animals n here\n");
    scanf("%s",&n);

    char z[50]="m+n";
    printf("a group of m and n is %s%s%s",m,n,z);*/

    float math[3];
    float physics[3];
    float chemistry[3];
    for(int i=0; i<3; i++){
    printf("enter the math marks here\n");
    scanf("%f",&math[i]);
    printf("enter the physics marks here\n");
    scanf("%f",&physics[i]);
    printf("enter the chemistry marks here\n");
    scanf("%f",&chemistry[i]);
     }
    float math_average,physics_average,chemistry_average;
    math_average=(math[0]+math[1]+math[2])/3;
    physics_average=(physics[0]+physics[1]+physics[2])/3;
    chemistry_average=(chemistry[0]+chemistry[1]+chemistry[2])/3;
     printf("math_average=%.1f\n",math_average);
    printf("physics_average=%.1f\n",physics_average);
    printf("chemistry_average=%.1f\n",chemistry_average);
    float overall_average=(math_average+physics_average+chemistry_average)/3;
    printf("overall_average=%.1f\n",overall_average);
    return 0;
    }
