
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result1, result2;

    printf("Dime el primer numero: ");
    scanf("%f", &num1);

    printf("Dime el segundo numero: ");
    scanf("%f", &num2);

    result1 = pow(num1, 4);
    result2 = pow(num2, 2);

   
    printf("El primer numero elevado a la cuarta potencia es: %.2f\n", result1);
    printf("El segundo numero elevado al cuadrado es: %.2f\n", result2);

    return 0;
}