#include<stdio.h> 
#include<math.h>

void main(){
    printf("Write a double number: ");
    double a;
    scanf("%lf", &a);
    if (a<0)
    a *=(-1);

    printf("Absolute value is %lf", a);
    return;
} 