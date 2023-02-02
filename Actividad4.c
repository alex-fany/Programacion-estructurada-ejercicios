/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 31 de enero de 2023
PROGRAMA: actividad4.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar la serie de Fibonacci usando tres ciclos.
**************************************************/ 
#include <stdio.h>//Incluír librería

int main() { //Programa principal

	//Definición de variables
	int a, b, c, i;
	float d=0, e=1, f;
	
	do{ //Inicio del programa y solicitud de datos
	printf("Bienvenido al programa :D\n Inserta un numero para comenzar-->");
	scanf("%d", &a);
	printf("Ahora selecciona del siguiente menu que ciclo quieres que use (escribe el numero)\n\t______________________\n\t|  1. Ciclo for      |\n\t|  2. Ciclo while    |\n\t|  3. Ciclo do.while |\n\t|____________________|\n");
	scanf("%d", &b);

		//Ciclo 1: usando for
		if (b==1) {
			printf("_________________________________\n");
			for (i=1; i<=a; i++){
				i=f;
				f=d+e;
				d=e;
				e=f;
				printf("%d\t", i);
			}
		//Ciclo 2: usando while
		} else if (b==2) {
			printf("__________________________________\n");
			while (i<=a){
				i=f;
				f=d+e;
				d=e;
				e=f;
				printf("%d\t", i);
			}
		//Ciclo 3: usando do-while	
		} else if (b==3){
			do{
				i=f;
				f=d+e;
				d=e;
				e=f;
			}while(i<=a);
			printf("__________________________________\n");
			printf("%d\t", i);
		}
		//Preguntar para repetir el programa
		printf("\n*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nQuieres repetir el programa?\n(pon 1 para si y 0 para no)\n");
		scanf("%d", &c);
	}while (c==1);
	printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nGracias por usar el programa, adios :D\a");

	return 0;	
}

