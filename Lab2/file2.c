#include<stdio.h> 
#include<math.h>

void main(){
    printf("Write an integer number: ");
    int n,m;
    scanf("%d", &n);
    printf("Write one more: ");
    scanf("%d", &m);
    double a, b;
    printf("Write 'a' number: ");
    scanf("%lf", &a);
    printf("Write 'b' number: ");
    scanf("%lf", &b);

    if (m<n){
        n = n + m -(m = n);
        b = b + a -(a=b);
    }

    double d = (b - a)/(m - n);
    int i;
    for(i=n; i <= m; i++){
        printf("%lf\n", a + (i - n)*d);
    }
    return;
}