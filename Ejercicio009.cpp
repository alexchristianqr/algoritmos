Algoritmo Ejercicio009
	Definir priceBase, priceTotal Como Real
	Definir valorIGV Como Real
	
	Escribir "Ingresa el precio base de un producto"
	Leer priceBase
	
	valorIGV <- (priceBase * 19) / 100
	priceTotal <- (priceBase + valorIGV)
	
	Imprimir "-----"
	Imprimir "Producto: Laptop ASUS Gamer FX165"
	Imprimir "Precio base: ", priceBase
	Imprimir "IGV (19%): ", valorIGV
	Imprimir "Total: ", priceTotal
	Imprimir "-----"
FinAlgoritmo