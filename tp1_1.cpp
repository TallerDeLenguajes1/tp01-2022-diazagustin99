#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[]){
    int c = 22;
    int *p;
    *p=c;
printf("Hola mundo\n");
printf("%i\n", *p);
printf("%p \n", p);


system("pause");
return 0;
}