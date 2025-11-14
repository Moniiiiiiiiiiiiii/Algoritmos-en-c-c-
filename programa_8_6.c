//Programa_6.c guia 08
//Monica Tatiana Castellanos Cuello
//14 de noviembre del 2025
//Codigo - estructura de define 

#include <stdio.h>
#define MAX 8 //permite definir constantes o literares, en este caso la constante MAX que sera 8 los valores que se leeran
int main ()
{
int arreglo[MAX], cont; //se define un valor por defecto para el tamaño deñ arreglo, si el tamaño de este cambia, solo modificamos la constante MAX, en este caso pusimos 8
for (cont=0; cont<MAX; cont++)//aca construimos el ciclo de tal manera que se cumpla siempre y cuando el contador sea menor a la constante MAX
{
printf("Ingrese el valor %d del arreglo: ", cont+1);//Se solicita el valor al usuario y se suma 1 al contador
scanf("%i", &arreglo[cont]);
}
printf("El valor ingresado para cada elemento del arreglo es:\n[");
for (cont=0; cont<MAX; cont++)
{
printf("%d\t", arreglo[cont]);//Aca se muestra un listado de los valores ingresados de forma horizontal
}
printf("]\n");
return 0;
}
