#include "Ingresos.h"


int pedirNumero(char texto[]){
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;
}



char pedirLetra(char texto[]){
    char letra;

    printf("%s", texto);
    scanf("%c", &letra);

    return letra;
}

