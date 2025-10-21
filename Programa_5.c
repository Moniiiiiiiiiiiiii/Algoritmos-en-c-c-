//Programa_5.c
//Monica Tatiana Castellanos
//21_10_2025
//Codigo para almacenar e imprimir variables

#include <stdio.h>

int main()
{
	int enteroNumero;
	char caracterA =65;
	double puntoFlotanteNumero;

	printf("Escriba un valor entero:");
	scanf("%i", &enteroNumero);
	printf("Escriba un valor real: ");
	scanf("%lf", &puntoFlotanteNumero);

	printf("\nImprimiendo las variables \a\n");	
	printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);
	printf("\t Valor de caracterA = %c \a\n", caracterA);
	printf("\t Valor de puntoFlotanteNumero = %lf \a\n",
	puntoFlotanteNumero);
	printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
	printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
	printf("\t Valor de puntoFlotanteNumero\n");
	printf("en notación científica = %e\n", puntoFlotanteNumero);
return 0;
}

//En este codigo se observa las funciones que tiene cada secuencia de carcateres:
//Se tiene \a por lo que al imprimir las variables emite un sonid
// \n para hacer un salto de linea
// %x para visualizar un valor como un entero hexadecimal (en este caso el valor del entero y del carcaterA)
// %lf para mostrar el numero flotante teniendo en cuenta el valor real ingresado
// %e para mostrar el valor flotante en notación cientifica 
//\t para mostar los datos de manera horizontal.
