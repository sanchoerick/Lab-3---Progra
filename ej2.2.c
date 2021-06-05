//Ejercicio 2.2 modificacion de codigo

#include <stdio.h>
#include <stdlib.h>

//Se declaran las 2 funciones mas importantes r=resultado y f=factorial
int main(int argc, char *argv[])
{
    long int r=0;
    long int f;
     //SE imprime el texto que permitira digitar el numero deseado
    printf("Para calcular un numero factorial digite el numero que desee: "); 
    scanf(" %ld",&f);

    r = 1;
    
    //Se declara el resultado final
    while(f > 1) {
        r = r * f;
        printf("%ld x",f);
    f--;
}

printf("1 = %ld \n",r);

return 0;
}