Algoritmo ecuación_cuadratica
	definir A,B,C, x1,x2, D Como Real  
	escribir "introduce el valor de A";
	leer A;
	escribir "introduce el valor de B";
	leer B;
	escribir "introduce el valor de C";
	leer C;
	D= B^2-4*A*C
	Si D >=0 Entonces
		x1=(-B + RAIZ(D))/2*A
		x2=(-B- RAIZ(D))/2*A
		Escribir "Las soluciones son:"
		Mostrar "x1:" x1
		Mostrar"x2:" x2
	SiNo
		Escribir "la ecuación no tiene solución real";
		x1= (-B/2*A)
		x2=(RAIZ(-D)/2*A)
		Escribir "Las soluciones imaginarias son:"
		Mostrar "x1:" x1 "+i" x2;

		Mostrar "x2:" x1 "-i" x2;
	FinSi
	
	
FinAlgoritmo
