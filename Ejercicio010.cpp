Algoritmo Ejercicio010
	Definir indice, iteraciones, entradaVendida Como Entero
	Definir valorEntGen,valorEntMay,valorEntMen Como Real
	Definir contadorEntGen,contadorEntMay,contadorEntMen Como Entero
	
	indice <- 0
	valorEntGen <- 0
	valorEntMay <- 0
	valorEntMen <- 0
	contadorEntGen <- 0
	contadorEntMay <- 0
	contadorEntMen <- 0
	iteraciones <- 5
	
	Repetir
		Escribir "Ingresa ", indice +1,"/", iteraciones, " entradas vendidas"
		Leer entradaVendida
		
		Segun entradaVendida Hacer
			150:
				valorEntGen <- valorEntGen + entradaVendida
				contadorEntGen <- contadorEntGen + 1
			50:
				valorEntMay <- valorEntMay + entradaVendida
				contadorEntMay <- contadorEntMay + 1
			80:
				valorEntMen <- valorEntMen + entradaVendida
				contadorEntMen <- contadorEntMen + 1
			De Otro Modo:
				Escribir "No tenemos entradas con ese precio"
				indice <- indice -1
		Fin Segun
		
		indice <- indice +1
	Hasta Que indice = iteraciones
	
	Imprimir "[General 150.00 PEN] Total ventas:", contadorEntGen, " Monto recaudado:", valorEntGen
	Imprimir "[Mayores 50.00 PEN] Total ventas:", contadorEntMay, " Monto recaudado:", valorEntMay
	Imprimir "[Menores 80.00 PEN] Total ventas:", contadorEntMen, " Monto recaudado:", valorEntMen
FinAlgoritmo
