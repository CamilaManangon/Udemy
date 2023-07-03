#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que pida un número entero entre 1 y 10
y guarde en un fichero de texto de nombre tabla-n.txt la tabla de ese número,
donde n es el número introducido.
Tablas de multiplicar*/

int main()
{
    int numero;
    printf("Introduce un numero: \n");
    scanf("%d",&numero);

    FILE *f;
    f = fopen("tabla.txt","w");//abro archivo en modo escritura
    for (int i=0; i<=10; i++){
        fprintf(f,"%d\n",i*numero);//escribo en tabla.txt, multiplico i por el numero recorre desde el 0 hasta el 10
    }

    fclose(f);
}
