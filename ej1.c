//Ejercicio 1: numeros triangulares
#include <stdio.h>
int main(){
    int a,t;
    printf( "Digite el numero triangular desea saber hasta el 100: "); 
    scanf("%i", &a);

    if (a < 101){
    t = (a * (a + 1))/2;
    printf("El valor triangular es: %i",t);}
    

    return 0;
}