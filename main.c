#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include "FuncionesMatematicas.h"
#include "FactorialNumeroEntero.h"

int main()
{
    int num1;
    int num2;
    int opcion;
    char seguir = 's';
    float resultado;
    int factorial1;
    int factorial2;
    char ingresoNuevosNumeros;




    do{
        num1 = pedirNumero("Ingrese primer numero: "); //Ingreso del primer numero y se lo asigno a la variable num1
        printf("A = %d\n", num1);//Muestro el valor del primer numero ingresado, llamado A
        num2 = pedirNumero("Ingrese el segundo numero: "); //Ingreso del segundo numero y se lo asigno a la variable num2
        printf("B = %d", num2);//Muestro el valor del segundo numero ingresado, llamado B
        printf("\nElija opcion:\n1.Resolver los  calculos e informar resultados.\n2.Salir\n");//Muestro el menu con las opciones
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                    resultado = sumarNumeros(num1, num2);//Llamo a la funcion sumarNumeros, que por parametros requiere dos enteros (num1, num2) y se lo asigno a la variable resultado
                    printf("\nEl resultado de A+B es: %0.f", resultado);//Muestro el resultado de la suma

                    resultado = restarNumeros(num1, num2); //Llamo a la funcion restarNumeros, que por parametros requiere dos enteros (num1, num2)y se lo asigno a la variable resultado
                    printf("\nEl resultado de A-B es: %0.f", resultado);//Muestro el resultado de la resta

                    if(num2 == 0){//Si el segundo numero ingresado(num2), es 0 (cero), no se puede realizar la division. Si la condicion es verdadera,
                        printf("\nNo es posible dividir por cero");//muestra un mensaje.
                    }else{
                        resultado = dividirNumeros(num1, num2);//de lo contrario se realiza la division del primer numero sobre el segundo y se lo asigna a la variable resultado
                        printf("\nEl resultado de A/B es: %0.1f", resultado); //Muestra el resultado de la division
                    }

                    resultado = multiplicarNumeros(num1, num2); //Llamo a la funcion multiplicarNumeros, que por parametros requiere dos enteros (num1, num2) y se lo asigno a la variable resultado
                    printf("\nEl resultado de A*B es: %0.f", resultado);//Muestro el resultado de la multiplicacon

                    factorial1 = factorialNumeroEntero(num1);//Ingresa el num1 a la funcion factorialNumeroEntero, retorna el factorial y se lo asigno a una variable.
                    factorial2 = factorialNumeroEntero(num2);//Ingresa el num2 a la funcion factorialNumeroEntero, retorna el factorial y se lo asigno a otra variable.
                    printf("\nEl factorial de A es: %d y El factorial de B es: %d", factorial1, factorial2);//Muestro el resultado de los dos factoriales
            break;
            case 2:// Si elige la opcion 2...
                printf("\nPrograma finalizado\n");//Muestro por pantalla que ya finalizo el programa
                seguir = 'n';//La variable seguir vale 'n', ya no vale 's'. Por lo que sale del DO-WHILE.
                break;
            default:
                printf("\nError. No ingreso una opcion valida\n");//En el caso de que haya ingresado otro numero, distinto de las opciones, Muestra el mensaje de error.
        }

        if(!(seguir == 'n')&& !(opcion == 2)){

           ingresoNuevosNumeros = pedirLetra("\nDesea ingresar otros numeros? De ser asi ingrese 's', de lo contrario 'n'\n");
           scanf("%c", &ingresoNuevosNumeros);
        }

    }while(seguir == 's'&& ingresoNuevosNumeros == 's');//Seguira iterando mientras la condicion sea verdadera (que seguir == 's')

    return 0;
}
