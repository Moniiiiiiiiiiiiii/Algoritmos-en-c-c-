//programa_2-7.c
//Monica Tatiana Castellanos
//24 de octubre del 2025
//funcionamiento de las condiciones (if)




#include<stdio.h>
int main()
{
if (6)  //Si el valor es diferente de 6 ejecutará las acciones (lo toma como verdadero), si el valor es 6 no hara nada (lo toma como falso) 
{
printf("Esta instrucción nunca se ejecuta\n");
printf("porque la condición siempre es falsa (0).\n");
}
if (-8) // El bloque de código de esta estructura if
// solo consta de una línea porque los comentarios
// no son tomados en cuenta por el compilador.
// La condición siempre es verdadera (diferente de 0)
printf("Esta instrucción siempre se ejecuta.\n");
return 0;
}
