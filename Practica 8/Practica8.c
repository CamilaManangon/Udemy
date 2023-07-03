#include <stdio.h>
#include <stdlib.h>

//imprime multiplos de 3 de 1 al 100

int main(){

    for(int i = 1; i<=100; i++){
        if(i%3==0){ //si el resto de 3 es igual a 0, si es multiplo
            printf("%d\n",i);
        }
    }

}