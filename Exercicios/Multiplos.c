#include <stdio.h>


int main (void){

    int x, y; 
    scanf("%d %d", &x, &y);

    if ( x < y ){
        if ((y%x) == 0 ){
            printf("\nSao Multiplos\n");
        }else{
            printf("\nNao sao Multiplos\n");
        }
    } else{
        if ((x%y) == 0 ){
            printf("\nSao Multiplos\n");
        }else{
            printf("\nNao sao Multiplos\n");
        }
    }


    return 0;
}