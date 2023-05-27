#include<stdio.h> 
#include<math.h>

void main(){
    int i = 0;
    printf("Write base of degree: ");
    double a;
    scanf("%lf", &a);
    printf("Wrinte an exponent: ");
    int n;
    scanf("%d", &n);
    int n_ = n;
    double d = 1;
    if (n < 0)
    {
        i += 1;
        n *=(-1);
    } 
    while (n > 0)
    {
        d *= a;
        n -= 1;
    }
    if(i == 0)
    printf("%lf ^ %d = %lf",a, n_, d);
    else
    printf("%lf ^ %d = %lf",a, n_, 1/d);

    return;
}