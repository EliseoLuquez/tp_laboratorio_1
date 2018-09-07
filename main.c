#include <stdio.h>
#include <stdlib.h>
#include "Luquez.h"


int main()
{
    float x;
    float y;
    int flagA = 0;
    int flagB = 0;
    int menu;
    int flagSalir = 0;
    int flag3 = 0;

    do
    {
        system("cls");
        printf("Elija una opcion\n\n");
        if(flagA==0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1. Ingresar 1er operando (A=%.2f)\n", x);
        }
        if(flagB==0)
        {
            printf("2. Ingresar 2do operando (B=y)\n\n");
        }
        else
        {
            printf("2. Ingresar 2do operando (B=%.2f)\n\n", y);
        }
        printf("3. Calcular operaciones: \na) Calcular la suma (A+B)\nb) Calcular la resta (A-B)\nc) Calcular la division (A/B)\n");
        printf("d) Calcular la multiplicacion (A*B)\ne) Calcular el factorial (A!)\n");
        printf("\n4. Mostrar resultados\n");
        printf("5. Salir\n");
        scanf("%d", &menu);

        switch(menu)
        {
                case 1:
                        system("cls");
                        printf("1. Ingresar 1er operando (A=x)\n");
                        fflush(stdin);
                        scanf("%f", &x);
                        flagA=1;
                        break;
                case 2:
                        system("cls");
                        printf("2. Ingresar 2do operando (B=y)\n)");
                        fflush(stdin);
                        scanf("%f", &y);
                        flagB=1;
                        break;
                case 3:
                        if(flagA!=1)
                        {
                            system("cls");
                            printf("Debe ingresar operando A\n");
                            printf("1. Ingresar 1er operando (A=x)\n");
                            fflush(stdin);
                            scanf("%f", &x);
                            flagA=1;
                        }
                        if(flagB!=1)
                        {
                            system("cls");
                            printf("Debe ingresar operando B\n");
                            printf("2. Ingresar 2do operando (B=y)\n)");
                            fflush(stdin);
                            scanf("%f", &y);
                            flagB=1;
                        }
                        system("cls");
                        printf("\ncalculando...\n\n");
                        suma(x, y);
                        resta(x, y);
                        division(x, y);
                        multiplicacion(x, y);
                        factorial(x);
                        factorial(y);
                        flag3 = 1;
                        system("pause");
                        break;

                case 4:
                        if(flagA!=1)
                        {
                            system("cls");
                            printf("Debe ingresar operando A\n");
                            printf("1. Ingresar 1er operando (A=x)\n");
                            fflush(stdin);
                            scanf("%f", &x);
                            flagA=1;
                        }
                        if(flagB!=1)
                        {
                            system("cls");
                            printf("Debe ingresar operando B\n");
                            printf("2. Ingresar 2do operando (B=y)\n)");
                            fflush(stdin);
                            scanf("%f", &y);
                            flagB=1;
                        }
                        if(flag3!=1)
                        {
                            system("cls");
                            printf("Primero debe hacer los calculos con la opcion 3\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            printf("Resultados:\n");
                            printf("\n1er operando (A=%.2f)\n", x);
                            printf("2do operando (B=%.2f)\n\n", y);
                            printf("El resultado de A+B es: %.2f", suma(x, y));
                            printf("\nEl resultado de A-B es: %.2f", resta(x, y));
                        }
                        if(y==0)
                        {
                            printf("\nEl resultado de A/B es: No es posible dividir por cero!");
                        }
                        else
                        {
                            printf("\nEl resultado de A/B es: %.2f", division(x, y));
                        }
                        printf("\nEl resultado de A*B es: %.2f", multiplicacion(x, y));
                        printf("\nEl factorial de A es: %d", factorial(x));
                        printf("\nEl facto4rial de B es: %d\n\n", factorial(y));
                        system("pause");
                        break;
                case 5:
                        flagSalir=1;
                        printf("\nAprete Enter para salir\n");
                        break;
        }

    }
    while(flagSalir==0);

    return 0;
}



