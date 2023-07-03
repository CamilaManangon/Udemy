#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cadena[50];
    char caracter;

    printf("Introduce una cadena\n");
    gets(cadena);
    printf("Introduce un caracter\n");
    caracter = getchar(); //getchar lee caracter guardado por usuario

    int i = 0;
    int pos = -1;//posicion del caracter
    while (cadena[i] != '\0' && pos == -1){//mientras pos sea -1 no encuentra el caracter porque en el momento que lo encuentra se asigan pos = i
        if (cadena[i] == caracter){
            pos = i;
        }
        i = i + 1;
    }

    if (pos != -1){
        printf("El caracter %c se encuentra en la cadena %s en la posición %d",caracter,cadena,pos);
    }
    else{
        printf("El caracter %c no se encuentra en la cadena %s",caracter,cadena);
    }
}
