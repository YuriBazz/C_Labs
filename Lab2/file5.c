#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<memory.h>
int GCD(int A, int B){
    if (B == 0)
    return A;
    else return GCD(B, A % B);
}

void main(){
    printf("Write a length of an array: ");
    int n,i,j;
    scanf("%d", &n);
    int *array = (int*)malloc((n) * sizeof(int));;
    for (i=0;i<n;i++){
        printf("Write %d-th element: ", i);
        scanf("%d", &array[i]);
    }
    for(j=0;j<=n-1;j++){
        for (i=j;i<=n-1;i++){
            if (GCD(array[j], array[i]) == 1 && array[i] != array[j])
            printf("[%d, %d]\n", array[j], array[i]);
        }
    }
    free(array);
    return;
}

