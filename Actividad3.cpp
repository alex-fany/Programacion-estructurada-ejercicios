/*******************PRESENTACI�N*******************
NOMBRE: Alejandra Estefan�a Mart�nez Mu�oz
FECHA: 25 de enero de 2023
PROGRAMA: actividad3.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIER�A EN COMPUTACI�N / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCI�N: Elaborar programa donde se le pida un n�m. al usuario con tres condiciones y ciclo.
**************************************************/ 
#include <stdio.h>//Inclu�r librer�a

int main() { //Programa principal

	//Definici�n de variables
	int a, b, i;
	
	do{ //Ciclo
	//Solicitud de n�mero
	printf("Bienvenido al programa :D\n*.*.*.*.*.*.*.*.*.*.*.*\nIngrese un numero--> ");
	scanf("%d", &a);
	
	//Condici�n 1: n�mero mayor a 0 pero menor a 500
	if (a > 0 && a < 500) {
		printf("__________________________________________________________________\n");
    for (i = 0; i < 100; i++) {
      a += 5;
      printf("%d\t", a);
    }
    //Condici�n 2: n�mero mayor a 500 pero menor a 1000
 	} else if (a >= 500 && a < 1000) {
    printf("__________________________________________________________________\n");
    for (i = 0; i < 50; i++) {
      a += 10;
      printf("%d\t", a);
    }
    //Condici�n 3: n�mero mayor a 1000
	} else if (a >= 1000) {
    printf("No se puede calcular el valor\a\a\n");
  	}
  	//Preguntar para repetir el programa
  	printf("________________________________________________\n�Quieres repetir el programa?\n(pon 1 para si y 0 para no)\n");
  	scanf("%d", &b);
  }while (b==1);
  //Cierre del programa
  printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nGracias por usar el programa, adios :D\a");

  return 0;
}
