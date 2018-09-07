# include  "Luquez.h"
# include  <stdio.h>
# include <stdlib.h>

/** \brief Suma de dos operandos
 *
 * \param a primero operando a sumar
 * \param b segundo operando a sumar
 * \return Total de la suma
 *
 */

float suma(float a, float b)
{
    return (a+b);
}


/** \brief Resta de 2 operando
 *
 * \param a primer operando a restar
 * \param b segundo operando a restar
 * \return Total de la resta
 *
 */

float resta(float a, float b)
{
    return (a-b);
}


/** \brief Multiplicacion de 2 operandos
 *
 * \param a primer operando a multiplicar
 * \param b segundo operando a multiplicar
 * \return Total de la multiplicacion
 *
 */

float multiplicacion(float a, float b)
{
    return (a*b);
}


/** \brief Division de 2 operando
 *
 * \param a primer operando a dividir
 * \param b segundo operando a dividir
 * \return Total de la division
 *
 */

float division(float a, float b)
{
    return a/b;
}


/** \brief Factorial de 1 operando
 *
 * \param numero operando a hacer factorial
 * \return Total del factorial
 *
 */

int factorial (int numero)
{
    int fact = 1;
    int i;
    if(numero==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=numero;i++)
        {
             fact*=i;
        }
    }
    return fact;
}
