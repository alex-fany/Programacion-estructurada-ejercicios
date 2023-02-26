/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 21 de febrero de 2023
PROGRAMA: ejercicio8.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar calculadora de matrices con voids
**************************************************/ 
//Incluir librerías
#include <stdio.h>
#include <stdlib.h>

//Declaración de variables para los void
void suma(int m1[3][3], int m2[3][3], int m3[3][3]);
void resta(int m1[3][3], int m2[3][3], int m3[3][3]);
void multip(int m1[3][3], int m2[3][3], int m3[3][3]);
void divisi(int m1[3][3], int m2[3][3], int m3[3][3]);
//Declaración de variables, parte 2
int a, b, i, j, k, m, matriz, lugar;
//Voids: operaciones
	//Definir operaciones a void: suma
	void suma(int m1[3][3], int m2[3][3], int m3[3][3]){
	    for(int i=0; i<3; i++){
	        for(int j=0; j<3; j++){
	            m3[i][j]=m1[i][j]+m2[i][j];
	        }
	    }
	}//Definir operaciones a void: resta
	void resta(int m1[3][3], int m2[3][3], int m3[3][3]){
	    for (int i=0; i<3; i++){
	        for (int j=0; j<3; j++){
	            m3[i][j]=m1[i][j]-m2[i][j];
	        }
	    }
	}//Definir operaciones a void: multiplicación
	void multip(int m1[3][3], int m2[3][3], int m3[3][3]){
	    for (int i=0; i<3; i++){
	        for (int j=0; j<3; j++){
	            m3[i][j]=0;
	            for (int k=0; k<3; k++){
	                m3[i][j]+=m1[i][k]*m2[k][j];
	            }
	        }
	    }
	}//Definir operaciones a void: división
	void divisi(int m1[3][3], int m2[3][3], int m3[3][3]){
	    for (int i=0; i<3; i++){
	        for (int j=0; j<3; j++){
	            m3[i][j]=m1[i][j]/m2[i][j];
	        }
	    }
	}
int main() { //Programa principal
	//Otra declaración de variables porque no deja de marcar error y ya me enfadé :(
	int m1[3][3], m2[3][3], m3[3][3];
	do{ //Inicio de ciclo
	//Menú de opciones principal
	printf("** Calculadora de matrices **\n");
	printf("_____________________\n| 1. Guardar valores |\n| 2. Ver matrices    |\n| 3. Operaciones     |\n| 4. Salir           |\n|___________________|\n");
	scanf("%d", &a);
		if(a==1){ //Opción 1: Guardar números
			printf("¿En que matriz quieres guardar?\n\t1  o  2\n");
			scanf("%d", &matriz);
			int lugar=0;
				if(matriz==1){ //Guardar números en matriz 1
					while (lugar !=9) {
					    printf("¿En que lugar quieres guardar?\n\t| 1   2   3 |\n\t| 4   5   6 |\n\t| 7   8   9 |\n");
					    scanf("%d", &lugar);
					    switch (lugar) {
					        case 1: //Guarda en [0, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[0][0]);
					        break;
					        case 2: //Guarda en [0, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[0][1]);
					        break;
					        case 3: //Guarda en [0, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[0][2]);
					        break;
					        case 4: //Guarda en [1, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[1][0]);
					        break;
					        case 5: //Guarda en [1, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[1][1]);
					        break;
					        case 6: //Guarda en [1, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[1][2]);
					        break;
					        case 7: //Guarda en [2, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[2][0]);
					        break;
					        case 8: //Guarda en [2, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[2][1]);
					        break;
					        case 9: //Guarda en [2, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m1[2][2]);
					        break;
					        default: //Si pone otra cosa que no
					            printf("QUE ES ESO\n");
					        break;
					    }
					}
				}else if(matriz==2){ //Guardar números en matriz 2
					while (lugar !=9) {
					    printf("¿En que lugar quieres guardar el numero?\n\t| 1   2   3 |\n\t| 4   5   6 |\n\t| 7   8   9 |\n");
					    scanf("%d", &lugar);
					    switch (lugar) {
					        case 1: //Guarda en [0, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[0][0]);
					        break;
					        case 2: //Guarda en [0, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[0][1]);
					        break;
					        case 3: //Guarda en [0, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[0][2]);
					        break;
					        case 4: //Guarda en [1, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[1][0]);
					        break;
					        case 5: //Guarda en [1, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[1][1]);
					        break;
					        case 6: //Guarda en [1, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[1][2]);
					        break;
					        case 7: //Guarda en [2, 0]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[2][0]);
					        break;
					        case 8: //Guarda en [2, 1]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[2][1]);
					        break;
					        case 9: //Guarda en [2, 2]
					            printf("Ingresa el numero --> ");
					            scanf("%d", &m2[2][2]);
					        break;
					        default: //Si pone otra cosa que no
					            printf("QUE ES ESO\n");
					        break;
					    }
					}
				}
		}else if(a==2){ //Opción 2: Ver los valores guardados
			printf("Las matrices son:\n Matriz 1 -->\n");
			printf("| %d", m1[0][0]); //Fila 0
			printf("\t%d", m1[0][1]);
			printf("\t%d |", m1[0][2]);
			printf("\n| %d", m1[1][0]); //Fila 1
			printf("\t%d", m1[1][1]);
			printf("\t%d |", m1[1][2]);
			printf("\n| %d", m1[2][0]); // Fila 2
			printf("\t%d", m1[2][1]);
			printf("\t%d |", m1[2][2]);
			printf("\n Matriz 2 -->\n");
			printf("| %d", m2[0][0]); //Fila 0
			printf("\t%d", m2[0][1]);
			printf("\t%d |", m2[0][2]);
			printf("\n| %d", m2[1][0]); //Fila 1
			printf("\t%d", m2[1][1]);
			printf("\t%d |", m2[1][2]);
			printf("\n| %d", m2[2][0]); // Fila 2
			printf("\t%d", m2[2][1]);
			printf("\t%d |", m2[2][2]);
		}else if(a==3){ //Opción 3: Operaciones de matrices, segundo menú
			printf("________________\n| 1. Sumar       |\n| 2. Restar      |\n| 3. Multiplicar |\n| 4. Dividir     |\n|________________|\n");
			scanf("%d", &b);
			switch(b){
				case 1: //Caso 1: Suma de matrices, llamar a void
					suma(m1, m2, m3);
				break;
				case 2: //Caso 2: Resta de matrices, llamar a void
					resta(m1, m2, m3);
				break;
				case 3: //Caso 3: Multiplicación de matrices, llamar a void
					multip(m1, m2, m3);
				break;
				case 4: //Caso 4: División de matrices, llamar a void
					divisi(m1, m2, m3);
				break;
				default: //Si pone otra cosa que no
					printf("queseso\n");
				break;
			}//Muestra de resultados de operaciones
			printf("La matriz resultante es: \n");
			printf("| %d", m3[0][0]); //Fila 0
			printf("\t%d", m3[0][1]);
			printf("\t%d |", m3[0][2]);
			printf("\n| %d", m3[1][0]); //Fila 1
			printf("\t%d", m3[1][1]);
			printf("\t%d |", m3[1][2]);
			printf("\n| %d", m3[2][0]); // Fila 2
			printf("\t%d", m3[2][1]);
			printf("\t%d |", m3[2][2]);
		}//Pregunta para repetir ciclo de menu
		printf("\n___________________\n| 1. volver a menu |\n| 2. salir         |\n|__________________|\n");
		scanf("%d", &b);
	}while(b==1);
	printf("Adios, que le vaya bien :D");
	//Termina el programa
	return 0;
}
