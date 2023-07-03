#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    printf("Ingrese le nota del alumno: ");
    scanf("%f", &nota);
    if(nota<5){
        printf("Suspenso\n");
    }else if(nota == 6){
        printf("Bien\n");
    }else if(nota == 7 || nota == 8){
        printf("Notable\n");
    }else if(nota == 9 || nota == 10){
        printf("Sobresaliente\n");
    }else{
        printf("Nota invalida\n");
    }

    return 0;
}