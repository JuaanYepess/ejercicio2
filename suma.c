#include <stdio.h>

int suma(int a, int b);
int restarYepes(int a, int b);
int sumaxref(int *ptra, int *ptrb);

int main(int argc, char *argv[]) {

    int a, b, opcion;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("\n1. Sumar");
    printf("\n2. Restar");
    printf("\nSeleccione una opcion: ");
    scanf("%d", &opcion);

    if(opcion == 1){
        printf("\nLa suma es: %d", suma(a,b));
    }

    if(opcion == 2){
        printf("\nLa resta es: %d", restarYepes(a,b));
    }

    printf("\nResultado por referencia: %d", sumaxref(&a,&b));

    return 0;
}

int suma(int a, int b){
    return a+b;
}

int restarYepes(int a, int b){
    return a-b;
}

int sumaxref(int *ptra, int *ptrb){
    return *ptra + *ptrb;