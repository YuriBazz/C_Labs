#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<memory.h>

void main(){
    printf("Write an unsinged integer: ");
    int a,k,c;
    scanf("%d", &a);
    int i = 1;
    int b = a;
    while(b > 0){
        i+=1;
        b/=10;
    }
    b = a;
    int array[i]; 
    for (k=i; k>=0; k--){
        array[k] = a%10;
        a/=10;
    }  
    c = 0;
    printf("%d = ", b);
    if (b == 0)
    printf("%d", b);
    else
    for(k=2; k<=i; k++){
        if ( array[k] != 0)
        {
            if (c == 1)
            printf(" + ");
            printf("%d", array[k]);
            c = 1;
            if (k <= i - 1)
            printf(" * 10");
            if (k < i - 1)
            printf("^%d", i - k);
        }
    }
    
    return;
}