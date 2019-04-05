#include "FactorialNumeroEntero.h"

int factorialNumeroEntero(int num){
    int resultado;
    if(num == 0 || num == 1){
        resultado = 1;
    }else{
        resultado = num * factorialNumeroEntero(num - 1);
    }
    return resultado;

}
