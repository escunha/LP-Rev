#include <stdio.h>


int main (void){

    int inicio, fim; 

    scanf("%d %d", &inicio, &fim);

    if ( inicio >= fim){
        printf("O JOGO DUROU %d HORA(S)\n", (24 - inicio) + fim);
    }else{
        printf("O JOGO DUROU %d HORA(S)\n", fim - inicio);
    }


    return 0;
}