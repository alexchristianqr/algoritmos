Algoritmo Ejemplo002
	Definir monto Como Real
	Definir av1,av2,av3,av4,av5 Como Real
	Escribir "Ingrese el monto para la reparacion"
	Leer monto 
	av1 <- monto*0.35
	av2 <- monto*0.25
	av3 <- monto*0.10
	av4 <- monto*0.15
	av5 <- monto-av1-av2-av3-av4
	Imprimir "La avenida La mar recibira S/", av1
	Imprimir "La avenida Abancay recibira S/", av2
	Imprimir "La avenida 28 de Julio recibira S/", av3
	Imprimir "La avenida Aviacion recibira S/", av4
	Imprimir "La avenida Tacna recibira S/", av5 
FinAlgoritmo