#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/** \brief Realiza la suma de dos variables flotantes y lo muestra por pantalla.
 *
 * \param Primer parametro a operar
 * \param Segundo parametro a operar
 * \return La funcion no devuelve nada
 *
 */

void suma (float a, float b)
{
    printf("La suma de los operandos A: %.2f y  B: %.2f es: %.2f\n", a,b, a+b);

}
/** \brief Realiza la resta de dos variables flotantes y lo muestra por pantalla.
 *
 * \param Primer parametro a operar
 * \param Segundo parametro a operar
 * \return La funcion no devuelve nada
 *
 */


void resta (float a, float b)
{
    printf("La resta de los operandos A: %.2f y B: %.2f es: %.2f\n", a,b,a-b);
}
/** \brief La funcion realiza la division de dos variables flotantes y la muestra por pantalla. Si el divisor es '0'
muestra un mensaje de error
 *
 * \param primer parametro a operar
 * \param segundo parametro a operar
 * \return La funcion no devuelve nada
 *
 */

void division(float a, float b)
{
    if(b==0)
    {
        printf("Error!! No se puede realizar division por '0'\n");
    }
        else
printf("La division de los operandos A: %.2f y B: %.2f es: %.2f\n", a,b, a/b);

}
/** \brief Realiza la multiplicacion de dos operadores flotantes y lo muestra por pantalla.
 *
 * \param Primer parametro a operar.
 * \param Segundo parametro a operar.
 * \return La funcion no retorna nada.
 *
 */
void multiplicacion(float a, float b)
{
    printf("La multiplicacion de los operandos A: %.2f y B: %.2f es: %.2f\n", a,b, a*b);
}
/** \brief Realiza el factorial del primer operando con una funcion recursiva deonde el resultado se almacena en una variable de nombre "resultado"
 *
 * \param Numero a realizar el factorial
 * \param
 * \return La funcion devuelve el numero 1 cuando el resultado de la resta de sullamada anterior es un 1.
 * \return Retorna un mensaje de error cuando el valor del primer parametro es menor a 0
 * \return Devuelve el resultado del factorial dentro de una variable del mismo nombre
 */

int factorial (int a)
{
    int resultado;
    if(a==1)
    {
        return 1;
    }

    if(a<0)
    {
        return printf("Error!! No se puede realizar el factorial del numero\n");
    }
    resultado=a*factorial(a-1);
    return resultado;
}
/** \brief Realiza una validacion del menu donde solo se pueden ingresar numeros del 1 al 9
 *
 * \param Numero 1 rango limite inferior
 * \param numero 9 rango limite superior
 * \return Devuelve un numero del 1 al 9
 *
 */

 int validacionOpcion (int opcion)
 {

 while(opcion<1 || opcion >9)
                {
                    printf("Error, ingrese una opcion valida(solo numeros del 1-9)\n");
                    fflush(stdin);
                    scanf("%d",& opcion);
                }
return opcion;
}





