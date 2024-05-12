#include "stdio.h"

float sum(float *a, float *b) {
    return (*a) + (*b);
}
	float res(float *a, float *b) {
    return (*a) - (*b);
}

float mul(float *a, float *b) {
    float resultado = 0;
    for (int i = 0; i < *b; i++) {
        resultado += *a;
    }
    return resultado;
}

float div(float *a, float *b) {
    float resultado = 0;
    while ((*a) >= (*b)) {
        resultado++;
        *a -= *b;
    }
    return resultado;
}

int main() {
    float n1, n2;
    printf("Ingrese el primer número: ");
    scanf("%f", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &n2);
    
    printf("Suma: %.2f\n", sum(&n1, &n2));
    printf("Resta: %.2f\n", res(&n1, &n2));
    printf("Multiplicación: %.2f\n", mul(&n1, &n2));
    printf("División: %.2f\n", div(&n1, &n2));

    return 0;
}