//Axel Hernandez y JuanPablo Toapanta
#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarProductos(char nombres[][50], float precios[], int n);
float calcularTotal(float precios[], int n);
float calcularPromedio(float precios[], int n);
int productoMasCaro(float precios[], int n);
int productoMasBarato(float precios[], int n);
void buscarProducto(char nombres[][50], float precios[], int n);

#endif
