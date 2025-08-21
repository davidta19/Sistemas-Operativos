/**************************************************************************************
 * Fecha:21/08/2025
 * Autor: David Tobar Artunduaga
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 **************************************************************************************/

#include <stdio.h>  
#include <stdlib.h>  

int main() {
    int n, i, *ptr, sum = 0;                // Defino variables y apuntadores de tipo entero

    printf("Enter number of elements: ");   // pido al usuario cuántos elementos quiere
    scanf("%d", &n);                        // guardo ese número en n

    ptr = (int*) calloc(n, sizeof(int));    // reservo memoria para n enteros y los inicializo en 0

    if(ptr == NULL) {                       // si calloc no pudo asignar memoria
        printf("Error! memory not allocated."); // muestro error
        exit(0);                            // cierro el programa
    }

    printf("Enter elements: ");             // pido que ingrese los elementos

    for(i = 0; i < n; ++i) {                // recorro desde 0 hasta n-1
        scanf("%d", ptr + i);               // guardo el valor ingresado en la posición i usando punteros
        sum += *(ptr + i);                  // sumo el valor recién ingresado al acumulador
    }

    printf("Sum = %d", sum);                // imprimo la suma de todos los elementos

    free(ptr);                              // libero la memoria reservada dinámicamente
    

    return 0;                               
}


