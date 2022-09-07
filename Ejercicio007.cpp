Funcion numToString <- validar3Cifras ( num )
	Definir numToString Como Caracter
	
	// Solicitar datos en consola
	Escribir "Debe ingresar un numero de 3 cifras"
	Leer num
	
	// Convertir numero a texto
	numToString <- ConvertirATexto(num)
	
	Si Longitud(numToString) <> 3 Entonces
		// Ejecutar funcion de manera recursiva
		numToString <- validar3Cifras(num)
	FinSi
Fin Funcion

Algoritmo Ejercicio007
	Definir num Como Entero
	Definir subNum1 Como Entero
	Definir subNum2 Como Entero
	Definir subNum3 Como Entero
	Definir numToString Como Caracter
	Definir totalCifras Como Entero
	
	// Validar y retornar cifra de 3 en cadena
	numToString <- validar3Cifras(num)
	
	// Substraer cifras
	subNum1 <- ConvertirANumero(Subcadena(numToString,0,1)) 
	subNum2 <- ConvertirANumero(Subcadena(numToString,2,2)) 
	subNum3 <- ConvertirANumero(Subcadena(numToString,3,3)) 
	
	// Sumar y elevar al cuadrado
	totalCifras <- (subNum1 + subNum2 + subNum3) ^2
	
	// Imprimir respuesta
	Imprimir "La suma total de sus cifras elevada al cuadrado es ", totalCifras
FinAlgoritmo