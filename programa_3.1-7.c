//Programa_3.1_7.c
//Monica Tatiana Castellanos
//24 de octubre dek 2025
//Uso de if y else para números pares e impares
//--------------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
int num;
printf("Ingrese un número:\n");
scanf("%d",&num);
if ( num%2 == 0 )
printf("El número %d es par.\n",num); //acá lee el numero digitado por el usuario 

else
printf("El número %d es impar.\n",num);//Condición, si el numero ingresado es divisble por 2 es par
return 0;
}
    









