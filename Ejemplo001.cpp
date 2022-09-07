Algoritmo Ejemplo001
	Definir totalVarones, totalMujeres Como Entero
	Definir porcentajeVar, porcentajeMuj Como Real
	Definir totalEstudiantes Como Entero
	
	Escribir "Ingresa la cantidad de varones"
	Leer totalVarones
	Escribir "Ingresa la cantidad de muejeres"
	Leer totalMujeres
	
	totalEstudiantes<- (totalVarones + totalMujeres)
	porcentajeVar <- (totalVarones/totalEstudiantes) * 100
	porcentajeMuj <- (totalMujeres/totalEstudiantes) * 100
	
	Imprimir "El porcentaje de varones es ", trunc(porcentajeVar), "%"
	Imprimir "El porcentaje de muejeres es ", trunc(porcentajeMuj), "%"
FinAlgoritmo
