#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n,conta = 0, conts = 0;
    float nota;

    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    for(int i = 0; i<n ; i++){
        printf("Ingrese la nota del alumno %d: ",i+1);
        scanf("%f", &nota);
        if(nota>=5){
            conta++;
        }else{
            conts++;
        }
    }
    
    printf("Cantidad de alumnos aprobados: %d\n", conta);
    printf("Cantidad de alumnos suspendidos: %d\n", conts);

}