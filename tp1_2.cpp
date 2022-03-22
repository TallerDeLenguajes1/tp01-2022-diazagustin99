#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cuadrado(int a);
void cuadradovoid(int a);
int main(int argc, char const *argv[]){
    int numero, a, b, *p_a, *p_b;
printf("Ingrese un numero para saber su cuadrado: ");
scanf ("%i", &numero);
printf("El cuadrado es: %i\n", cuadrado(numero));
cuadradovoid(numero);
printf("la direccion de memoria de la variable 'numero': %p y su contenido es: %i\n",&numero,numero);



system("pause");
    return 0;
}

int cuadrado(int a){

return a*a;
}

void cuadradovoid(int a){
int resultado;
resultado=a*a;
printf("(funcion devolviendo void) El cuadrado es: %i\n", resultado);
}


