//Axel Hernandez y JuanPablo Toapanta
#include <stdio.h>
#include "funciones.h"

int main() {
    char nombres[10][50];
    float precios[10];
    int n;

    // Solicitar número de productos y validar el rango
    do {
        printf("Ingrese el numero de productos (entre 1 y 10): ");
        scanf("%d", &n);
        if (n < 1 || n > 10) {
            printf("Epa cuidado, el numero de productos debe estar entre 1 y 10.\n\n");
        }
    } while (n < 1 || n > 10);

    ingresarProductos(nombres, precios, n);

    printf("\n--- RESULTADOS ---\n");
    printf("El precio total del inventario: $%.2f\n", calcularTotal(precios, n));
    printf("El precio promedio: $%.2f\n", calcularPromedio(precios, n));

    int indiceCaro = productoMasCaro(precios, n);
    int indiceBarato = productoMasBarato(precios, n);

    printf("El producto mas caro es: %s ($%.2f)\n", nombres[indiceCaro], precios[indiceCaro]);
    printf("El producto mas barato es: %s ($%.2f)\n", nombres[indiceBarato], precios[indiceBarato]);

    buscarProducto(nombres, precios, n);

    return 0;
}
