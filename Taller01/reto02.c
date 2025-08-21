/**************************************************************************************
 * Fecha:21/08/2025
 * Autor: David Tobar Artunduaga
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
 **************************************************************************************/

#include <stdio.h>              
#include <string.h>            
#include <stdlib.h> 

int main() {                 
char *q = NULL;                 // puntero a char; inicia en NULL
printf("Requesting space for \"Goodbye\" \n"); // aviso: voy a pedir memoria para guardar ese texto
q = (char *)malloc(strlen("Goodbye")+1); // reservo bytes exactos para "Goodbye" + '\0' 
if (!q) {                       // si malloc falla, q queda en NULL
perror("Failed to allocate space because"); // muestra el error del sistema 
exit(1);                        // aborto el programa porque no hay memoria
}                               
printf("About to copy \"Goodbye\" to q at address %s \n", q); // imprimo la “dirección” con %s
strcpy(q, "Goodbye");           // copio "Goodbye" al bloque de memoria apuntado por q
printf("String copied\n");      // confirmo que la copia se hizo
printf("%s \n", q);             // ahora sí imprimo el contenido real almacenado en q
return 0;                       
}                               

