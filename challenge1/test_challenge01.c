#include <stdio.h>
#include <assert.h>

int suma (int a, int b) {

    int suma = a + b;
    return suma;
}

void test_suma () {

    assert(suma(2, 6) == 8);
    printf("test 1 OK");

    assert(suma(-20,1) == -19);
    printf("test 2 OK");


    assert(suma(-20,-3) == -23);
    printf("test 3 OK");

}

void main () {

    test_suma();

}