#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, alt, area;
    printf("Introduzca la base del rectangulo: ");
    scanf("%f",&base);
    printf("Introduzca la altura del triángulo: ");
    scanf("%f",&alt);
    area = base * alt;
    printf("El area es: %.2f",area);

}