#include <stdio.h>

int suma (int a, int b) {

    int suma = a + b;
    return suma;
}


void main () {

    int a, b;

    printf("Dime un numero a\n");
    scanf(" %d", &a);
    printf("Dime un numero b");
    scanf(" %d", &b);

    printf("El resultado es %d\n", suma (a, b));

}