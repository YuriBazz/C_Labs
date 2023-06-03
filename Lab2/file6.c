#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<memory.h>

void main(){
    printf("Write a length of an array: ");
    int n,i,local_Maximum,j,k;
    local_Maximum=0;
    k=0;
    scanf("%d", &n);
    int *array = (int*)malloc((n-1) * sizeof(int));;
    for (i=0;i<n;i++){
        printf("Write %d-th element: ", i);
        scanf("%d", &array[i]);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i;j++){
            if (array[j] > local_Maximum){
            local_Maximum=array[j];
            k=j;
            }
        }
        array[n-i] = array[n-i] + local_Maximum - (local_Maximum = array[n-i]);
        array[k] = local_Maximum;
        local_Maximum = 0;
    }
    printf("array = [%d", array[0]);
    for(i=1;i<n-1;i++){
        printf(", %d", array[i]);        
    }
    printf(", %d]\n", array[n-1]);
    free(array);
    return;
}