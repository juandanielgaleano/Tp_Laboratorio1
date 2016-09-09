#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int resultado;
    float primerOperando=0;
    float segundoOperando=0;

    while(seguir=='s')
    {

        system("cls");
        printf("\n----------CALCULADORA----------\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n", primerOperando);
        printf("2- Ingresar 2do operando (B=%.2f)\n", segundoOperando);
        printf("3- Calcular la suma (A+B) %.2f+%.2f\n", primerOperando,segundoOperando);
        printf("4- Calcular la resta (A-B) %.2f-%.2f\n", primerOperando,segundoOperando);
        printf("5- Calcular la division (A/B)%.2f/%.2f\n", primerOperando,segundoOperando);
        printf("6- Calcular la multiplicacion (A*B) %.2f*%.2f\n",primerOperando,segundoOperando);
        printf("7- Calcular el factorial (A!)%.2f\n",primerOperando);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        fflush(stdin);
        scanf("%d",&opcion);



        switch(opcion)
        {
            case 1:
                printf("Ingrese primer operando: ");
                scanf("%f",& primerOperando);
                break;
            case 2:
                printf("Ingrese segundo operando: ");
                scanf("%f",& segundoOperando);
                break;
            case 3:
                suma(primerOperando, segundoOperando);
                system("pause");
                break;
            case 4:
                resta(primerOperando,segundoOperando);
                system("pause");
                break;
            case 5:
                division(primerOperando,segundoOperando);
                system("pause");
                break;
            case 6:
                multiplicacion(primerOperando,segundoOperando);
                system("pause");
                break;
            case 7:
                resultado=factorial(primerOperando);
                printf("El resultado del factorial es: %d\n", resultado);
                system("pause");
                break;
            case 8:
                suma(primerOperando,segundoOperando);
                resta(primerOperando,segundoOperando);
                division(primerOperando,segundoOperando);
                multiplicacion(primerOperando,segundoOperando);
                resultado=factorial(primerOperando);
                printf("El resultado del factorial es: %d\n", resultado);


                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
            default:
              validacionOpcion(opcion);
                system("pause");
                break;

        }

    }
    return 0;
}

