//Ejercicio 3: vocal o consonante
#include <stdio.h>
int main(){
    char x[5];

    printf("Digite un caracter valido en minuscula del abecedario: ");
    scanf("%s",x);

    if (strcmp(x,"a")==0){
    printf("Este caracter es vocal",x);}

    else if (strcmp(x,"e")==0){
        printf("Este caracter es vocal",x);}
     
    else if (strcmp(x,"i")==0){
        printf("Este caracter es vocal",x);}
    
    else if (strcmp(x,"o")==0){
        printf("Este caracter es vocal",x);}
    
    else if (strcmp(x,"u")==0){
        printf("Este caracter es vocal",x);}

    else
    printf("Este caracter es consonante",x);


    return 0;
}