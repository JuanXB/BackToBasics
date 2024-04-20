#include <stdio.h>

/* Copia la entrada de la salida*/

void main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
