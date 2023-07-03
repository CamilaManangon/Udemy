#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main()
{
    struct producto *prod;

    prod = malloc(sizeof(struct producto));//malloc reserva un espacio de memoria con el tamaño de struct producto

    printf("Introduce el codigo\n");
    scanf("%d",&prod->codigo);//se pone con felcha porque prod es un puntero, entonces pedimos que se guarde en prod que apunta al campo de codigo
    printf("Introduce la descripcion\n");
    scanf("%s",prod->descripcion);//no pongo & porque una cadena ya es un puntero
    printf("Introduce el precio\n");
    scanf("%f",&prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);

    free(prod);//liberamos espacio de memoria reservada
    prod = NULL;//puntero pasa a tener valor NULL

}
