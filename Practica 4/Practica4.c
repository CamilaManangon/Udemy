#include <stdio.h>
#include <stdlib.h>

int main(){
    float euro;
    printf("Ingrese la cantidad de euros que quiera convertir: ");
    scanf("%f",&euro);

    printf("%.2f euros equivale a %.2f pesetas.\n",euro, euro*166.386);

    return 0;

}