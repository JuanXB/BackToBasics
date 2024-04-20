#include <stdio.h>

/* Copia la entrada de la salida; 2a version*/

void main()
{
    int c;

    /*Ejercicio 1-6*/
    printf("%d",(getchar() != EOF)); 

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
