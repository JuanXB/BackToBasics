#include <stdio.h>

/*
Imprime la tabla Celsius-Fahrenheit
*/

void main() 
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -17.8; // Limite inferior de la tabla de temperaturas.
    upper = 148.9; // Limite superior
    step = 10; // Tanaño del incremento

    celsius = lower;

    printf("Celsius-Fahrenheit\n");

    while (celsius <= upper) {
        fahr = (celsius  / (5.0/9.0) ) + 32.0;
        printf("%6.1f\t%3.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}