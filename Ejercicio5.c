/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 2 de febrero de 2023
PROGRAMA: actividad5.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar la suma de un vector
**************************************************/ 
#include <stdio.h>//Incluír librería

int main() { //Programa principal

	//Definición de variables
	int op, a[9], b, c, d, i;
	
	//Muestra de opciones
	printf("\t* * Bienvenido :D * *\nEstas son las opciones:\n__________________\n| 1.Guardar numeros |\n| 2. Nada          |\n__________________\n");
	scanf("%d", &op);
		//Guardado de números
		if(op==1){
			printf("Solo tienes 10 espacios\n");
			a[0]= NULL;
			a[1]= NULL;
			a[2]= NULL;
			a[3]= NULL;
			a[4]= NULL;
			a[5]= NULL;
			a[6]= NULL;
			a[7]= NULL;
			a[8]= NULL;
			a[9]= NULL;
			printf("Pon el numero del cupo 1: ");
			scanf("%d", &a[0]);
			printf("Pon el numero del cupo 2: ");
			scanf("%d", &a[1]);
			printf("Pon el numero del cupo 3: ");
			scanf("%d", &a[2]);
			printf("Pon el numero del cupo 4: ");
			scanf("%d", &a[3]);
			printf("Pon el numero del cupo 5: ");
			scanf("%d", &a[4]);
			printf("Pon el numero del cupo 6: ");
			scanf("%d", &a[5]);
			printf("Pon el numero del cupo 7: ");
			scanf("%d", &a[6]);
			printf("Pon el numero del cupo 8: ");
			scanf("%d", &a[7]);
			printf("Pon el numero del cupo 9: ");
			scanf("%d", &a[8]);
			printf("Pon el numero del cupo 10: ");
			scanf("%d", &a[9]);
			
			//Mostrar lista de valores
			printf("________________________\nEsto es lo guardado:\n");
			printf("  1 --> %d", a[0]);
			printf("\n  2 --> %d", a[1]);
			printf("\n  3 --> %d", a[2]);
			printf("\n  4 --> %d", a[3]);
			printf("\n  5 --> %d", a[4]);
			printf("\n  6 --> %d", a[5]);
			printf("\n  7 --> %d", a[6]);
			printf("\n  8 --> %d", a[7]);
			printf("\n  9 --> %d", a[8]);
			printf("\n  10 --> %d", a[9]);
			
			do{ //Inicio de ciclo de menu
			printf("\n__________________________\n¿Que quieres hacer?\n________________\n| 1.Editar numeros    |\n| 2.Borrar numeros    |\n| 3.Sumar los numeros |\n| 4.Vaciar todo   |\n|________________|\n");
			scanf("%d", &b);
			//Caso 1: Editar numero
			if(b==1){
				printf("¿Que cupo quieres editar?\n");
				scanf("%d", &c);
				while(a[c]!=NULL){
					a[c]=0;
					printf("borrado cupo %d", a[c]);
				}
			//Caso 2: Borrar numero
			} else if(b==2){
				printf("¿Que cupo quieres borrar?");
				scanf("%d", &c);
			//Caso 3: Suma de numeros
			} else if(b==3){
			
			//Caso 4: Borrar todo
			} else if(b==4){
				a[0]= NULL;
				a[1]= NULL;
				a[2]= NULL;
				a[3]= NULL;
				a[4]= NULL;
				a[5]= NULL;
				a[6]= NULL;
				a[7]= NULL;
				a[8]= NULL;
				a[9]= NULL;
				printf("Ahora está vacio :D\a\n");
			}
			//Pregunta para repetir ciclo de menu
			printf("¿Que quieres hacer?\n__________________\n| 1. volver a menu |\n| 2. salir       |\n________________\n");
			scanf("%d", &d);
			}while(d==1);
			//Cierre de programa
			printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nGracias por usar el programa, adios :D\a");
		

	return 0;
	}
}

