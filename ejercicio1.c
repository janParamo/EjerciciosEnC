//Calcular el cubo de un numero
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* Variables */
    int num, cubo;
    system("cls||clear");
    printf("Dime un numero:");
    scanf("%i", &num);
    
    //Operacion
    cubo=pow(num, 3);
    
    //Resultado
    printf("El cubo de %i es %i", num, cubo);


}
