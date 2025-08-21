/**************************************************************************************
 * Fecha:21/08/2025
 * Autor: David Tobar Artunduaga
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 **************************************************************************************/

#include <stdio.h>  
#include <stdlib.h>  


int main() {
    int *ptr, i , n1, n2;                         // defino variables tipo entero y tambien un puntero

    printf("Enter size: ");                       // pido al usuario el tamaño inicial
    scanf("%d", &n1);                             // guardo el valor en n1

    ptr = (int*) malloc(n1 * sizeof(int));        // reservo memoria dinámica para n1 enteros gracias a la funcion malloc

    printf("Addresses of previously allocated memory: "); // muestro las direcciones de la memoria inicial

    for(i = 0; i < n1; ++i)                       // recorro desde 0 hasta n1-1
        printf("\n\np = %p\n", ptr + i);          // imprimo la dirección de cada entero reservado

    printf("\n Enter the new size: ");            // pido al usuario el nuevo tamaño
    scanf("%d", &n2);                             // guardo el valor en n2

    // reallocating the memory con el nuevo tamaño
    ptr = realloc(ptr, n2 * sizeof(int));         // cambio el bloque reservado a tamaño n2 enteros

    printf("Addresses of newly allocated memory: "); // muestro las nuevas direcciones
    for(i = 0; i < n2; ++i)                       // recorro desde 0 hasta n2-1
        printf("\n\np = %p\n", ptr + i);          // imprimo las direcciones después de realloc

    free(ptr);                                    // libero la memoria al final

    return 0;                                    
}

