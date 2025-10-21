//Programa_4.c
// Monica Tatiana Castellanos
// 21_10_2025
//En este programa observamos los cambios al usar las 8 secuencias de caracteres




#include <stdio.h>

int main()
{
	int entero; 
	float flotante;

	printf("Ingresa el valor entero : ");
	scanf("%i", &entero);
	printf ("El valor ingresado es: %d\v", entero);

	printf("Ingresa el valor float: ");
	scanf("%f\v", &flotante);
	printf("El valor ingresado es: %f\v", flotante);

	return 0;
}


// con \a se emite un sonido al colocar los valores solicitados.
// con \b no muestra el valor entero digitado 
// con \f hace un salto de linea cuando solicita el valor flotante y no sale de ahi al menos que se digite otro valor
// con \n permite dejar un espcio entre líneas
// con \r solicita el valor entero y el valor flotante pero no muestra el resultado
// con \t tabula de manera horizontal los mensajes
// con \v tabula de manera vertical los mensajes
// con \0 dice que es un caracter nulo, no hace nada 
