#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i = 1; i<=100; i++){
        if(i%3==0){ //si el resto de 3 es igual a 0, si es multiplo
            printf("%d\n",i);
        }
    }

}