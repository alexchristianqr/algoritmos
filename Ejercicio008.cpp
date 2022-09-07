Algoritmo Ejercicio008
	Definir monto Como Real
	Definir socioA como Real // 30%
	Definir socioB Como Real // 20%
	Definir socioC Como Real // 50%
	
	Escribir "Ingresa un monto"
	Leer monto
	
	// Distribuir porcentajes
	socioA <- (monto * 30) / 100
	socioB <- (monto * 20) / 100
	socioC <- (monto * 50) / 100
	
	// Imprimir respuesta
	Imprimir "30% para A:", socioA, " 20% para B:", socioB, " y 50% para C:",socioC
FinAlgoritmo