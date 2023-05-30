#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<memory.h>

void main(){
    printf("Write an length of the first array: ");
    int n,m,i,j,k;
    scanf("%d", &n);
    int array_1[n-1];
    for (i=0;i<n;i++){
        printf("Write %d-th element: ", i);
        scanf("%d", &array_1[i]);
    }
    printf("Write an length of the second array: ");
    scanf("%d", &m);
    int array_2[m-1];
    for (i=0;i<m;i++){
        printf("Write %d-th element: ", i);
        scanf("%d", &array_2[i]);
    }
    int array_result[n+m-1];
    j=0;
    i=0;
    for(k=0;k<=n+m-1;k++){
        if ((i == n|| array_2[j]<=array_1[i]) && j < m)
        {
            array_result[k]=array_2[j];
            j+=1;
        }
        else if ((j == m || array_1[i]<=array_2[j]) && i < n)
        {
            array_result[k]=array_1[i];
            i+=1;
        }

    }
    printf("array_result = [%d", array_result[0]);
    for(k=1;k<=n+m-2;k++){
        printf(", %d", array_result[k]);
    }
    printf(", %d]\n", array_result[n+m-1]);
    free(array_1);
    free(array_2);
    free(array_result);
    return;
}