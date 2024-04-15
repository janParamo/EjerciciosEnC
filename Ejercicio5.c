#include <stdio.h>  

// Función para calcular el descuento
float calcularDescuento(float precioOriginal) {
    return 0.15 * precioOriginal; 
}

float calcularNuevoPrecio(float precioOriginal, float descuento) {
    return precioOriginal - descuento;
}

int main() {
    float precioOriginal, descuento, nuevoPrecio;

    printf("Ingrese el precio original del producto: ");
    scanf("%f", &precioOriginal);

    
    descuento = calcularDescuento(precioOriginal);

    
    nuevoPrecio = calcularNuevoPrecio(precioOriginal, descuento);

    printf("Precio original del producto: $%.2f\n", precioOriginal);
    printf("Descuento: $%.2f\n", descuento);
    printf("Nuevo precio con descuento: $%.2f\n", nuevoPrecio);

    return 0;
}
