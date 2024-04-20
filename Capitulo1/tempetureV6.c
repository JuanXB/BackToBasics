#include <stdio.h>

#define LOWER 0 /* Limite inferior de la tabla*/
#define UPPER 300 /* Limite superior de la tabla*/
#define STEP 20 /* Tamaño del incremento*/


void main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    
}