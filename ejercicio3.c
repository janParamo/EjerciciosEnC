#include  <stdio.h>
int main(int argc, char const *argv[])
{
    char nombre[60];
    printf ("Dime tu nombre: ");
    scanf ("%s", nombre);

    printf ("Hola, %s", nombre);
    return 0;
}
