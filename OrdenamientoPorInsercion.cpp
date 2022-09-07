Algoritmo OrdenamientoPorInsercion
	// Numero de posiciones en un arreglo
	N <- 10
	
	// Declarar variables de tipo arreglo
	Dimension arregloDesordenado(N)
	Dimension arregloOrdenado(N)
	
	// Ejecutar subprocesos
	CargarArreglo(arregloDesordenado,arregloOrdenado,N)
	OrdenarPorInsercion(arregloOrdenado,N)
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

SubAlgoritmo OrdenarPorInsercion(arregloOrdenado,N)
	// Iterar
	Para i <- 2 Hasta N
		// Guardar valor clave
		clave <- arregloOrdenado(i)
		
		// Actualizar la variable que tiene una posicion anterior
		anteriorPosicion <- i-1

		// Iterar validando
		Mientras anteriorPosicion > 0 y arregloOrdenado(anteriorPosicion) > clave Hacer
			// Actualizar el valor de la posicion actual con el valor de la posicion anterior
			arregloOrdenado(anteriorPosicion+1) <- arregloOrdenado(anteriorPosicion)
			
			// Actualizar posicion
			anteriorPosicion <- anteriorPosicion-1
		Fin Mientras
		
		// Actualizar un valor del arreglo por el valor clave
		arregloOrdenado(anteriorPosicion+1) <- clave
	Fin Para
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