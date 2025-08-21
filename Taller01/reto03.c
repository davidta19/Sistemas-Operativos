/**************************************************************************************
 * Fecha:21/08/2025
 * Autor: David Tobar Artunduaga
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 **************************************************************************************/

#include <stdio.h>  
#include <stdlib.h>  

int main() {
    int *ptr;                           // puntero a entero
    ptr = malloc(15 * sizeof(*ptr));    // reservo espacio para 15 enteros en memoria dinámica

    if (ptr != NULL) {                  // verifico que malloc no devolvió NULL
        *(ptr + 5) = 480;               // asigno 480 al sexto entero 
        printf("Value of the 6th integer is %d\n", *(ptr + 5)); // imprimo el valor almacenado en la posición 6                
    }

    return 0;                           
}

