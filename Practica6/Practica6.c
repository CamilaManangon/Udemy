#include <stdio.h>
#include <stdlib.h>

int main(){
    float precio, consumo, preciof;
    int km;
    printf("Ingrese el precio base del vehiculo: ");
    scanf("%f", &precio);
    printf("Ingrese el numero de kilometros: ");
    scanf("%f",&km);
    printf("Ingrese el consumo: ");
    scanf("%f", &consumo);

    if(km<20000 && consumo<=5){
        preciof = precio * 1.2;//se incrementa precio base en 20%
    }else if(km>20000 && consumo<=5){
        preciof = precio * 1.1;
    }else if(consumo>5){
        preciof = precio * 1.05;
    }

    printf("El precio final del vehículo es %.2f\n",preciof);

}