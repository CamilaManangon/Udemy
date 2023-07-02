#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float num, prom = 0, suma = 0;
    int cont = 0;

    do{
        printf("Ingrese un numero: ");
        scanf("%f",&num);
        suma += num;
        cont++;
    }while(num != 0);

    cont = cont - 1;
    prom = suma/cont;

    printf("La suma de los numeros es %.2f\n", suma);
    printf("El promedio de los numeros es %.2f\n",prom);

}