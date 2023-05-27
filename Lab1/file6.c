#include<stdio.h> 
#include<math.h>
int secret = 56;

void main(){
    int try;

    while(1 > 0)
    {
        printf("Try to guess: ");
        scanf("%d", &try);
        if(try > secret)
        printf("Try the less number\n");
        else if(try < secret)
        printf("Try the greater number\n");
        else
        {
            printf("That's right!");
            return;
        }

    }
}