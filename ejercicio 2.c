#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, ante, cuadrado;
    printf ("Ingrese el numero: ");
    scanf ("%d", &numero);

    ante = numero - 1;
    cuadrado = ante * ante;

    printf ("El cuadrado del antecesor de %d es: %d\n", numero, cuadrado);

    return 0;
}
