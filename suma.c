#include <stdio.h>

int suma(int a, int b);

int main(int argc, char *argv[]) {

    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("El resultado es: %d", suma(a,b));

    return 0;
}

int suma(int a, int b) {
    return a+b;
}