/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 25 de enero de 2023
PROGRAMA: actividad3.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar programa donde se le pida un núm. al usuario con tres condiciones y ciclo.
**************************************************/ 
#include <stdio.h>//Incluír librería

int main() { //Programa principal

	//Definición de variables
	int a, b, i;
	
	do{ //Ciclo
	//Solicitud de número
	printf("Bienvenido al programa :D\n*.*.*.*.*.*.*.*.*.*.*.*\nIngrese un numero--> ");
	scanf("%d", &a);
	
	//Condición 1: número mayor a 0 pero menor a 500
	if (a > 0 && a < 500) {
		printf("__________________________________________________________________\n");
    for (i = 0; i < 100; i++) {
      a += 5;
      printf("%d\t", a);
    }
    //Condición 2: número mayor a 500 pero menor a 1000
 	} else if (a >= 500 && a < 1000) {
    printf("__________________________________________________________________\n");
    for (i = 0; i < 50; i++) {
      a += 10;
      printf("%d\t", a);
    }
    //Condición 3: número mayor a 1000
	} else if (a >= 1000) {
    printf("No se puede calcular el valor\a\a\n");
  	}
  	//Preguntar para repetir el programa
  	printf("________________________________________________\n¿Quieres repetir el programa?\n(pon 1 para si y 0 para no)\n");
  	scanf("%d", &b);
  }while (b==1);
  //Cierre del programa
  printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nGracias por usar el programa, adios :D\a");

  return 0;
}
