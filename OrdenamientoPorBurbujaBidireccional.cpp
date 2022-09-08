Algoritmo OrdenamientoPorBurbujaBidireccional
	// Numero de posiciones en un arreglo desde la posicion 0
	N <- 9 // (0-9) Para la iteracion del arreglo
	DN <- N+1 // (1-10) Para la declaracion de la dimension del arreglo
	
	// Declarar variables de tipo arreglo
	Dimension arregloDesordenado(DN)
	Dimension arregloOrdenado(DN)
	
   	// Ejecutar subprocesos
	CargarArreglo(arregloDesordenado,arregloOrdenado,N)
	OrdenarPorBurbujaBidireccional(arregloOrdenado,N)
	MostrarArreglo(arregloDesordenado,arregloOrdenado,N)
FinAlgoritmo

SubAlgoritmo CargarArreglo(arregloDesordenado,arregloOrdenado,N)
	// Iterar
	Para i <- 0 Hasta N Hacer
		// Obtener un numero aleatorio entre 1-20
		numeroAzar <- Aleatorio(1,20)
		
		// Agregar en cada posicion del arreglo el numero aleatorio obtenido
		arregloOrdenado(i) <- numeroAzar // Lista de numeros desordenados que seran ordenados
		arregloDesordenado(i) <- numeroAzar// Lista temporal de numeros desordenados
	Fin Para
FinSubAlgoritmo

SubAlgoritmo OrdenarPorBurbujaBidireccional(arregloOrdenado,N)
	Definir permutacion Como Logico
	Definir actual, direccion como Entero
	Definir comienzo, final como Entero
	
	permutacion <- Verdadero
	actual <- 0
	direccion <- 1
	comienzo <- 1
	final <- N
	
	Repetir
		permutation <- Falso
		Mientras (direccion = 1 Y actual < final) O (direccion = -1 Y actual > comienzo) Hacer
			actual <- actual + direccion
			Si (arregloOrdenado[actual] < arregloOrdenado[actual -1]) Entonces
				clave <- arregloOrdenado[actual]
				arregloOrdenado[actual] <- arregloOrdenado[actual -1]
				arregloOrdenado[actual -1] <- clave
				permutation <- Verdadero
			FinSi
		Fin Mientras
		Si	direccion = 1 Entonces
			final <- final -1
		Sino
			comienzo <- comienzo +1
		FinSi
		direccion <- -direccion 
	Hasta Que (permutation = Falso)
FinSubAlgoritmo

SubAlgoritmo MostrarArreglo(arregloDesordenado,arregloOrdenado,N)
	// Pintar primer arreglo
	Escribir "Arreglo desordenado:"
	Para i <- 0 Hasta N
		Escribir Sin Saltar arregloDesordenado(i), " "
	Fin Para
	Imprimir ""
	Imprimir "--"
	
	// Pintar segundo arreglo
	Escribir "Arreglo ordenado:"
	Para i <- 0 Hasta N
		Escribir Sin Saltar arregloOrdenado(i), " "
	Fin Para
	Imprimir ""
	Imprimir "--"
FinSubAlgoritmo