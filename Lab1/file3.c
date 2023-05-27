#include<stdio.h> 
#include<math.h>

double PI = 3.14;

void main(){
    printf("Write a radius: ");
    double R;
    scanf("%lf", &R);
    printf("Wrirte an angle: ");
    double a;
    scanf("%lf", &a);

    a *= PI/180;
    printf("The square is %lf\n", 0.5*R*R*(a - sin(a)) );
    printf("The arc length is %lf\n",R*a);
    return;
}