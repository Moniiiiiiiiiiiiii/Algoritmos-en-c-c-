//Programa_1_7.c
//Monica Tatiana Castellanos
//24 de octubre dek 2025
//Estructura de solución

#include <stdio.h>
int main()
{
	int a, b;  //acá definimos las dos variables a y b

	printf("Escriba dos valores enteros separados por un espacio:\n "); //acá ponemos un mensaje en la pantalla solicitando al usuario dos valores (a y b) y \n para hacer un salto de linea
	scanf("%d %d", &a, &b); //acá se usa el %d para dejar un espacio para la variable a y b respectivamente, digitadas por el usuario

	if (a>b)
	{
		printf("\ta (%d) es mayor a b (%d).\n" ,a,b); //en el %d aparecera el valor de la variable a y b
	}
		printf("\a\t El programa sigue su curso.\n"); //\a para emitir sonido y \t para tabular al momento de dar la información
	return 0;
}
