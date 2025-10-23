//Programa_6.c
//Monica Tatiana Castellanos
//23 de octubre del 2025
//Programa en el que se usan los operadores aritméticos y las expresiones logicas

#include <stdio.h>
int main()
{  
	short ocho, cinco, cuatro, tres, dos, uno;
	// 8 en binario: 0000 0000 0000 1000
	ocho = 8;
	// 5 en binario: 0000 0000 0000 0101
	cinco = 5;
	// 4 en binario: 0000 0000 0000 0100
	cuatro = 4;
	// 3 en binario: 0000 0000 0000 0011
	tres = 3;
	// 2 en binario: 0000 0000 0000 0010
	dos = 2;
	// 1 en binario: 0000 0000 0000 0001
	uno = 1;
	printf("Operadores aritméticos\n");
	printf("5 modulo 2 = %d\n",cinco%dos);
	printf("Operadores lógicos\n");
	printf("9 >> 2 = %d\n",ocho>>dos);//(>>) corrimiento de 2 bits hacia la derecha
	printf("9 << 1 = %d\n",ocho<<1);//(<<) corrimiento de 1 bit hacia la izquierda
	printf("5 & 4 = %d\n",cinco&cuatro);//
	printf("3 | 2 = %d\n",tres|dos);
	printf("\n");
return 0;
}
