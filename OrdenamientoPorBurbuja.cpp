Algoritmo OrdenamientoPorBurbuja
	// Numero de posiciones en un arreglo
	N <- 10
	
	// Declarar variables de tipo arreglo
	Dimension arregloDesordenado(N)
	Dimension arregloOrdenado(N)
	
   	// Ejecutar subprocesos
	CargarArreglo(arregloDesordenado,arregloOrdenado,N)
	OrdenarPorBurbuja(arregloOrdenado,N)
	MostrarArreglo(arregloDesordenado,arregloOrdenado,N)
FinAlgoritmo

SubAlgoritmo CargarArreglo(arregloDesordenado,arregloOrdenado,N)
	Definir indice Como Entero
	indice <- 1// Inicializar el indice en 1
	
	// Iterar
	Para i <- 1 Hasta N Hacer
		// Obtener un numero aleatorio entre 1-20
		numeroAzar <- Aleatorio(1,20)
		
		// Agregar en cada posicion del arreglo el numero aleatorio obtenido
		arregloOrdenado(indice) <- numeroAzar // Lista de numeros desordenados que seran ordenados
		arregloDesordenado(indice) <- numeroAzar// Lista temporal de numeros desordenados
		
		// Sumarle 1 al indice
		indice = indice+1
	Fin Para
FinSubAlgoritmo

SubAlgoritmo OrdenarPorBurbuja(arregloOrdenado,N)
	Repetir
		indice <- 0
		
		// Iterar
		Para i <- 2 Hasta N Hacer
			// Actualizar la variable que tiene una posiciun siguiente
			siguientePosicion <- i
			
			// Actualizar la variable que tiene una posiciun anterior
			anteriorPosicion <- i-1
			
			// Validar si los dos valores estan ordenados
			Si arregloOrdenado[anteriorPosicion] > arregloOrdenado[siguientePosicion] Entonces
				// Guardar valor clave
				clave <- arregloOrdenado[anteriorPosicion]
				
				// Actualizar el valor de la posiciun anterior con el valor de la posicion siguiente
				arregloOrdenado[anteriorPosicion] <- arregloOrdenado[siguientePosicion]
				
				// Actualizar un valor del arreglo por el valor clave
				arregloOrdenado[siguientePosicion] <- clave
				
				indice <- siguientePosicion
			FinSi
		FinPara
	Hasta Que indice = 0
FinSubAlgoritmo

SubAlgoritmo MostrarArreglo(arregloDesordenado,arregloOrdenado,N)
	// Pintar primer arreglo
	Escribir "Arreglo desordenado:"
	Para i <- 1 Hasta N 
		Escribir Sin Saltar arregloDesordenado(i), " "
	Fin Para
	Imprimir ""
	Imprimir "--"
	
	// Pintar segundo arreglo
	Escribir "Arreglo ordenado:"
	Para i <- 1 Hasta N 
		Escribir Sin Saltar arregloOrdenado(i), " "
	Fin Para
	Imprimir ""
	Imprimir "--"
FinSubAlgoritmo