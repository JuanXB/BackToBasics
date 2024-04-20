#include <stdio.h>

/*
Imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ... 300
*/

void main() 
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; // Limite inferior de la tabla de temperaturas.
    upper = 300; // Limite superior
    step = 20; // Tanaño del incremento

    fahr = lower;

    printf("Fahrenheit-Celsius\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}