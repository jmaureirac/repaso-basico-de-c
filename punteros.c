#include <stdio.h>
#include <stdlib.h>

void intercambia( int *a, int *b ) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void nointercambia( int a, int b ) {
    int aux = a;
    b = a;
    a = aux;
}

void dobletriplepunteros() {
    int a = 5, *p = &a, **d = &p, ***t = &d;
    printf("doblepunteros:\ta: %d, *p: %d, **d: %d, ***t: %d\n\n", a, *p, **d, ***t);
}

// funcion suma(n, sumapares, sumaimpares) que a n le calcula la suma de dig pares y impares por separados y 
// los almacena en sumapares y sumaimpares
void sumadigitos( int n, int *sp, int *si ) {
    *sp = 0, *si = 0;
    while( n > 0 ) {
        if ( n%2 == 0 ) {
            *sp += n%10;
        } else {
            *si += n%10;
        }
        n = n/10;
    }
}

int main()
{
    int a = 10, b = 5;
    printf("valores:\ta: %d, b: %d\n\n", a, b);
    
    // intercambia
    intercambia(&a, &b);
    printf("intercambia:\ta: %d, b: %d\n\n", a, b);
    // fin intercambia

    a = 10, b = 5;

    // nointercambia
    nointercambia(a, b);
    printf("nointercambia:\ta: %d, b: %d\n\n", a, b);
    // fin nointercambia


    // dobletriplepunteros
    dobletriplepunteros();
    // fin dobletriplepunteros


    // sumadigitos
    int n = 504321, suma_pares, suma_impares;
    sumadigitos( n , &suma_pares, &suma_impares );
    printf("sumadigitos:\tn: %d, sp: %d, si: %d\n\n", n, suma_pares, suma_impares);
    // sumadigitos

    return 0;
}
