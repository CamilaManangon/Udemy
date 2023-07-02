#include <stdio.h>
#include <stdlib.h>

int main(){

    float pesos[5];
    float suma = 0, prom = 0;
    int contMay = 0, contMen = 0;

    for(int i = 0; i < 5; i++){
        printf("Ingrese el peso %d: ", i+1);
        scanf("%f",&pesos[i]);
        suma += pesos[i];
    }

    prom = suma/5;

    for(int i = 0; i < 5; i++){
        if(pesos[i]>=prom){
            contMay ++;
        }else{
            contMen ++;
        }
    }

    printf("El promedio de pesos es %.2f\n", prom);
    printf("Pesos mayores o iguales al promedio: %d\n", contMay);
    printf("Pesos menores al promedio: %d\n", contMen);

}