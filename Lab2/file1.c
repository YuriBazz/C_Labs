#include<stdio.h> 
#include<math.h>

void main(){
    printf("Write an integer number: ");
    int n, i, A, B;
    scanf("%d", &n);
    A = B = 1;
    printf("F_0 = 1\n");
    for(i=1; i<=n; i++){
        printf("F_%d = %d\n", i, B);
        A = A + B - (B = A);
        B += A;
    }
    return;

}
