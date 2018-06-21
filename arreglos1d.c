#include <stdio.h>
#include <stdlib.h>

#define TRES 3
#define DIEZ 10

typedef int arreglo_tres[TRES];
typedef int arreglo_diez[DIEZ];


void arreglo_basico() {
    int arreglo[5] = { 5, 4, 3, 2, 1 };
    printf("\nvalores del arreglo basico: %d, %d, %d, %d, %d\n\n", arreglo[0], arreglo[1], arreglo[2], arreglo[3], arreglo[4]);
}

void primeros_n_digitos( int largo ) {
    int digitos[largo];

    for( int i = 0 ; i < largo ; i++ ) {
        digitos[i] = i+1;    
    }

    printf("arreglo: ");    
    for( int j = 0 ; j < largo ; j++ ) {
        printf("%d, ", digitos[j]);
    }
    printf("\n\n");
}


void imprimir_arreglo( int arreglo[], int largo ){
    printf("\narreglo_impreso: ");
    for( int i = 0 ; i < largo ; i++ ) {
        printf("%d, ", arreglo[i]);
    }
    printf("\n\n");
}

// funcion llenado de arreglos custom de tipo de variable custom.... a_tres y a_diez, son los parametros
// mientras que arreglo_tres y arreglo_diez son tipos de variable
void arreglos_con_typedef( arreglo_tres a_tres, arreglo_diez a_diez ) {
    for( int i = 0 ; i < TRES ; i++ ) {
        a_tres[i] = i+1;
    }

    imprimir_arreglo(a_tres, TRES);

    for( int j = 0 ; j < DIEZ ; j++ ) {
        a_diez[j] = j+1;
    }

    imprimir_arreglo(a_diez, DIEZ);

}


void llenar_arreglo( int arreglo[], int largo ) {
    for( int i = 0 ; i < largo ; i++ ) {
        printf("Ingresar valor [%d] del arreglo: ", i);
        scanf("%d", &arreglo[i]);
    }
}

int suma_elementos_arreglo( int arreglo[], int largo ) {
    int suma = 0;
    for( int i = 0 ; i < largo ; i++ ) {
        suma += arreglo[i];
    }
    return suma;
}

int main()
{
    arreglo_basico();
    primeros_n_digitos(10);

    // arreglos custom que están en el principio del documento
    arreglo_tres custom_array_tres; 
    arreglo_diez custom_array_diez;
    // arreglo_tres y arreglo_diez pasan a ser un "tipo" de variable

    // llenar arreglos custom y imprimirlos
    arreglos_con_typedef(custom_array_tres, custom_array_diez);


    int array[10];
    llenar_arreglo(array, 10);
    imprimir_arreglo(array, 10);

    printf("\nla suma de los elementos del arreglo es: %d\n\n", suma_elementos_arreglo(array, 10));

    return 0;
}
