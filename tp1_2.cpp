#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cuadrado(int a);
void cuadradovoid(int a);
void invertir(int *a, int *b);
void orden(int *a, int *b);
int main(int argc, char const *argv[])
{
    int numero, a, b;
    printf("Ingrese un numero para saber su cuadrado: ");
    scanf("%i", &numero);
    printf("El cuadrado es: %i\n", cuadrado(numero));
    cuadradovoid(numero);
    printf("la direccion de memoria de la variable 'numero': %p y su contenido es: %i\n", &numero, numero);
    printf("Ingrese un numero: ");
    scanf("%i", &a);
    printf("Ingrese un numero: ");
    scanf("%i", &b);
    printf("el valor de a y b antes de pasar por la funcion invertir: %i y %i\n", a, b);
    invertir(&a, &b);
    printf("el valor de a y b despues de pasar por la funcion invertir: %i y %i\n", a, b);
    orden(&a,&b);
    printf("el valor de a y b ordenados: %i, %i\n", a, b);
    system("pause");
    return 0;
}

int cuadrado(int a)
{

    return a * a;
}

void cuadradovoid(int a)
{
    int resultado;
    resultado = a * a;
    printf("(funcion devolviendo void) El cuadrado es: %i\n", resultado);
}

void invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    int aux;
    if (a >= b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
