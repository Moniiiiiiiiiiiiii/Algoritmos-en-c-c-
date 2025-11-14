//Programa_5.c guia 08
//Monica Tatiana Castellanos Cuello
//14 de noviembre del 2025
//Codigo - estructura de repetición for

#include <stdio.h>
int main ()
{
int enteroNumAlumnos = 15; //Definimos nuestra variable
float realCalif = 0.0, realPromedio = 0.0; //definimos un contador en decimal
printf("\tPromedio de calificaciones\n");
for (int indice = 0 ; indice < enteroNumAlumnos ; indice++) //el indice actua como una variable de control del ciclo for, iniciamos el indice en 0 y va a ir aumentando de a 1, siempre y cuando sea menor a la variable que definimos, es decir, llega hasta 15
{
printf("\nIngrese la calificación del alumn %d\n", indice+1);//acá solicitamos la calificación y se cumple el ciclo siempre y cuando sea menor a nuetsra variable definida
scanf("%f",&realCalif);
realPromedio += realCalif;
}
printf("\nEl promedio de las calificaciones ingresadas es: %f\n", //cuando termina el ciclo, se muestra un promedio de las calificaciones ingresadas
realPromedio/enteroNumAlumnos);
return 0;
}
