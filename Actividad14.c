/*******************PRESENTACIÓN********************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 10 de abril de 2023
PROGRAMA: ejercicio14.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Juego de torres de Hanoi
***************************************************/
#include <stdio.h>//Incluir librerias
//Apartado de voids
int pollo=0;//Para que funcione el contador de movimientos
void comp(int pisos, char de, char para, char mientr){//Para que la computadora lo resuelva
	if(pisos==1){
		pollo++;//Contador de movimientos
		printf(" %d - Mover piso 1 de la torre %c a la torre %c\n", pollo, de, para);
    return;
	}
	comp(pisos-1, de, mientr, para);//Llamada recursiva
	pollo++;//Contador de movimientos
	printf(" %d - Mover piso %d de la torre %c a la torre %c\n", pollo, pisos, de, para);
	comp(pisos-1, mientr, para, de);
}
void user(int pisos, char de, char para, char mientr){//Para que el usuario lo resuelva
	int i, tortadejamon;
	do{//Inicio de ciclo
		for(i=0; i<pisos; i++){
			printf(" - Selecciona la torre a mover:\n\t1 |\n\t2 |\n\t3 |\n\t--> ");
			scanf("%d", &tortadejamon);
			switch(tortadejamon){//Según la torre que elija
				case 1://Torre 1
					printf(" - Selecciona la torre destino:\n\t1 | - |\n\t2 | - |\n\t3 | - |\n\t--> ");
					scanf("%c", &tortadejamon);
					switch(tortadejamon){//Según la torre que elija
						case 1://Torre 1
							printf("\a - No puedes mover en la misma torre.");
						break;
						case 2://Torre 2
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, de, mientr);
							user(pisos-1, mientr, para, de);
						break;
						case 3://Torre 3
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, de, para);
							user(pisos-1, mientr, para, de);
						break;
					}
				break;
				case 2://Torre 2
					printf(" - Selecciona la torre destino:\n\t1 | - |\n\t2 | - |\n\t3 | - |\n\t--> ");
					scanf("%c", &tortadejamon);
					switch(tortadejamon){
						case 1://Torre 1
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, mientr, de);
							user(pisos-1, mientr, para, de);
						break;
						case 2://Torre 2
							printf("\a - No puedes mover en la misma torre.");
						break;
						case 3://Torre 3
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, de, para);
							user(pisos-1, mientr, para, de);
						break;
					}
				break;
				case 3://Torre 3
					printf(" - Selecciona la torre destino:\n\t1 | - |\n\t2 | - |\n\t3 | - |\n\t--> ");
					scanf("%c", &tortadejamon);
					switch(tortadejamon){
						case 1://Torre 1
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, mientr, de);
							user(pisos-1, mientr, para, de);
						break;
						case 2://Torre 2
							printf(" - Mover piso %d de la torre %c a la torre %c\n", pisos, mientr, para);
							user(pisos-1, mientr, para, de);
						break;
						case 3://Torre 3
							printf("\a - No puedes mover en la misma torre.");
						break;
					}
				break;
			}
		}
	}while(tortadejamon!=pisos);
}
int burro, pisos, resolv, tortadejamon; //Declarar variables para main
int main(){//Programa inicial
	do{printf(" *  Torres de Hanoi |-| |-|  *\n - Elige los pisos de las torres\n -!\a OJO, cuidado al poner un numero grande o exploto :(\n\t --> ");
		scanf("%d", &pisos);
		printf("-------------------------\n| 1. Resolver por user  |\n| 2. Resolver por compu |\n-------------------------\n\t --> ");
		scanf("%d", &resolv);
		switch(resolv){//Según la opción que elija
			case 1://Resolver por el usuario
				user(pisos, 'A', 'C', 'B');//Llamar a void
			break;
			case 2://Resolver por la computadora
				comp(pisos, 'A', 'C', 'B');//Llamar a void
			break;
		}printf("\n - EEEE ya se resolvió :D\a\n ----------------\n |  1. Volver  |\n |  2. Salir   |\n ----------------\n\t->");
		scanf("%d", &burro);
	}while(burro==1);//Opción para repetir o terminar programa
printf("    ADIOS VUELVA PRONTO");
return 0;//Termina programa
}
