#include<stdio.h> 
#include<math.h>
 
void main(){
    printf("Write starting member of the progression: ");
    double a;
    scanf("%lf", &a);
    printf("Write progression difference: ");
    double d;
    scanf("%lf", &d);
    printf("Write member's number: ");
    int n;
    scanf("%d", &n);
    
    a += (n-1)*d;
    printf("%lf\n", a);
    return ;

}