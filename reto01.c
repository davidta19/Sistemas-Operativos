/**************************************************************************************
 * Fecha:21/08/2025
 * Autor: David Tobar Artunduaga
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 **************************************************************************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h> // para malloc y free

int main() {
    char *p = malloc(100); // reservo 100 bytes en memoria para p (ahí guardo la primera cadena)
    char *q = malloc(20);  // reservo 20 bytes en memoria para q (aquí guardo la segunda cadena)

    
    printf("Address of p = %p\n", p);// muestro la dirección de memoria a la que apunta p

    
    strcpy(p, "Hello, I'm the best in Operating Systems!!!"); // copio un mensaje en el espacio que apunta p

    
    printf("%s\n", p);// imprimo el contenido guardado en p (la cadena copiada arriba)

    
    printf("About to copy \"Goodbye\" to q\n");// aviso que voy a copiar otro mensaje, ahora en q

    
    strcpy(q, "Goodbye");// copio la cadena "Goodbye" en el espacio que apunta q

    
    printf("String copied\n");// confirmo que la copia se hizo

   
    printf("%s\n", q); // imprimo el contenido de q para verificar que está bien guardado

 
    return 0;
}
