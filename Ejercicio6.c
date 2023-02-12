/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 7 de febrero de 2023
PROGRAMA: ejercicio6.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar calculadora con matrices 2x2
**************************************************/ 
//Incluír librerías
#include <stdio.h>
#include <stdlib.h>

int main() { //Programa principal

	//Declaración de variables
	int a, b, i, j, k, matriz, lugar,  m100=NULL, m101=NULL, m110=NULL, m111=NULL, m200=NULL, m201=NULL, m210=NULL, m211=NULL;
	int m1[2][2], m2[2][2], m3[2][2];
	
	do{ //Inicio de ciclo
	//Menú de opciones principal
	printf("**** Bienvenido :D ****\nEsta es una calculadora de matrices de 2x2\n_______________________________________________\n");
	printf("_________________________\n| 1. Guardar valores     |\n| 2. Ver matrices        |\n| 3. Sumar matrices      |\n| 4. Restar matrices     |\n| 5. Multiplicar matrices|\n| 6. Salir               |\n|________________________|\n");
	scanf("%d", &a);
	
		if(a==1){ //Opción 1: Guardar números
			printf("¿En que matriz quieres guardar el numero?\n\t1 o 2\n");
			scanf("%d", &matriz);
				if(matriz==1){ //Guardar números en matriz 1
					printf("¿En que lugar quieres guardar el numero?\n\t| 1    2 |\n\t| 3    4 |\n");
					scanf("%d", &lugar);
						if (lugar==1){ //Guardar valor en el lugar [0,0]
							m100=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m100);
							m1[0][0]=m100;
						}else if(lugar==2){ //Guardar valor en el lugar [0,1]
							m101=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m101);
							m1[0][1]=m101;
						}else if(lugar==3){ //Guardar valor en el lugar [1,0]
							m110=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m110);
							m1[1][0]=m110;
						}else if(lugar==4){ //Guardar valor en el lugar [1,1]
							m111=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m111);
							m1[1][1]=m111;
						}
					}else if(matriz==2){ //Guardar números en matriz 2
						printf("¿En que lugar quieres guardar el numero?\n\t| 1    2 |\n\t| 3    4 |\n");
						scanf("%d", &lugar);
						if (lugar==1){ //Guardar valor en el lugar [0,0]
							m200=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m200);
							m2[0][0]=m200;
						}else if(lugar==2){ //Guardar valor en el lugar [0,1]
							m201=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m201);
							m2[0][1]=m201;
						}else if(lugar==3){ //Guardar valor en el lugar [1,0]
							m210=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m210);
							m2[1][0]=m210;
						}else if(lugar==4){ //Guardar valor en el lugar [1,1]
							m211=NULL;
							printf("Ingresa el numero --> ");
							scanf("%d", &m211);
							m2[1][1]=m211;
						}
					}
		}else if(a==2){ //Opción 2: Ver los valores guardados
			printf("Las matrices son:\nMatriz 1-->\n");
			printf("|%d", m1[0][0]);
			printf("\t%d|", m1[0][1]);
			printf("\n|%d", m1[1][0]);
			printf("\t%d|", m1[1][1]);
			printf("\nMatriz 2-->\n");
			printf("|%d", m2[0][0]);
			printf("\t%d|", m2[0][1]);
			printf("\n|%d", m2[1][0]);
			printf("\t%d|", m2[1][1]);
		}else if(a==3){ //Opción 3: Suma de matrices
			for (i=0; i<2; i++){
		        for (j=0; j<2; j++){
		            m3[i][j]=m1[i][j]+m2[i][j];
		        }
	    	}//Muestra resultados de suma
		    printf("La matriz resultante es: \n");
			printf("|%d", m3[0][0]);
			printf("\t%d|", m3[0][1]);
			printf("\n|%d", m3[1][0]);
			printf("\t%d|", m3[1][1]);	
		}else if(a==4){ //Opción 4: Resta de matrices
			for (i = 0; i < 2; i++) {
        		for (j = 0; j < 2; j++) {
        			m3[i][j] = m1[i][j] - m2[i][j];
        		}
    		}//Muestra resultados de resta
    		printf("La matriz resultante es: \n");
			printf("|%d", m3[0][0]);
			printf("\t%d|", m3[0][1]);
			printf("\n|%d", m3[1][0]);
			printf("\t%d|", m3[1][1]);
		}else if(a==5){ //Opción 5: Multiplicación de matrices
			for (i = 0; i < 2; i++) {
       			for (j = 0; j < 2; j++) {
        			m3[i][j]=0;
            		for (k = 0; k < 2; k++) {
                		m3[i][j]+=m1[i][k]*m2[k][j];
           			}
        		}
    		}//Muestra resultados de multiplicación
    		printf("La matriz resultante es: \n");
			printf("|%d", m3[0][0]);
			printf("\t%d|", m3[0][1]);
			printf("\n|%d", m3[1][0]);
			printf("\t%d|", m3[1][1]);
		}
		//Pregunta para repetir ciclo de menu
		printf("\n¿Que quieres hacer?\n___________________\n| 1. volver a menu |\n| 2. salir         |\n|__________________|\n");
		scanf("%d", &b);
	}while(b==1);
	printf("Adios, que le vaya bien :D");
	//Termina el programa
	return 0;
}
