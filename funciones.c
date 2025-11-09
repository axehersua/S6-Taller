#include <stdio.h>
#include <string.h>
#include "funciones.h"
//Axel Hernandez y JuanPablo Toapanta
void ingresarProductos(char nombres[][50], float precios[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nIngresa el nombre del producto %d: ", i+1);
        scanf("%s", nombres[i]);
        printf("Ingresa el precio del producto %d: ", i+1);
        scanf("%f", &precios[i]);
    }
}

float calcularTotal(float precios[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++)
        total += precios[i];
    return total;
}

float calcularPromedio(float precios[], int n) {
    return calcularTotal(precios, n) / n;
}

int productoMasCaro(float precios[], int n) {
    int indice = 0;
    for(int i = 1; i < n; i++)
        if(precios[i] > precios[indice])
            indice = i;
    return indice;
}

int productoMasBarato(float precios[], int n) {
    int indice = 0;
    for(int i = 1; i < n; i++)
        if(precios[i] < precios[indice])
            indice = i;
    return indice;
}

void buscarProducto(char nombres[][50], float precios[], int n) {
    char buscado[50];
    printf("\nIngresa el nombre del producto a buscar: ");
    scanf("%s", buscado);

    int encontrado = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(nombres[i], buscado) == 0) {
            printf("Perfecto, El producto %s cuesta $%.2f\n", nombres[i], precios[i]);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado)
        printf("Lo sentimos ,el producto que solicito no se encuentra en el inventario.\n");
}
