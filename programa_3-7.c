//Programa_3_7.c
//Monica Tatiana Castellanos
//24 de octubre dek 2025
//Uso de if else
//------------------------------------------------------------------------------------


#include <stdio.h>
int main()
{
        int a, b;  //acá definimos las dos variables a y b

        printf("Escriba dos valores enteros separados por un espacio:\n "); //acá ponemos >
        scanf("%d %d", &a, &b); //acá se usa el %d para dejar un espacio para la variable >
        {
        if (a>b)
        {
                printf("\ta (%d) es mayor a b (%d).\n" ,a,b); //en el %d aparecera el valo>
 }


       
	else  
	{
          printf("\tb (%d) es mayor a  a (%d).\n" ,b,a); //acá se define la accion a ejecutar si a no es mayor a b
	}
}
	printf("\a\t El programa sigue su curso. \n");
        return 0;
}







