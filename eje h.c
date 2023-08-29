/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular(float num) {
    float doble, resultado,cuadrado;

 
   cuadrado = pow(num, 2);
    doble = 2 * num;

    printf("el cuadrado de tu numero es: %.2f\n", cuadrado);

    resultado = cuadrado - doble;

    return resultado;
}

int main() {
    float num;
    printf("Ingrese un numero: ");
    scanf("%f", &num);

    printf("Tu resultado es: %.2f\n", calcular(num));

    return 0;
}
