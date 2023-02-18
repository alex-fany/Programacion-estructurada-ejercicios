/*******************************PRESENTACIÓN*****************************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 14 de febrero de 2023
PROGRAMA: actividad7.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Elaborar un programa que realice las operaciones de dos conjuntos.
********************************************************************************/ 
//Incluir librerías
#include <stdio.h>
#include <stdlib.h>

int main() { //Programa principal

	//Definir variables, parte uno
	int c1, c2, a, b, c, d;
	//Inicia programa definiendo longitud de conjuntos
	printf("*** Bienvenido al programa :D ***\nTe dare dos conjuntos, define su longitud desde 2 a 10:\nConjunto 1-->");
	scanf("%d", &c1);
	printf("Conjunto 2-->");
	scanf("%d", &c2);
	
	//Definir variables, parte dos
	char con1[c1], con2[c2];
	int i, j, k;
	//Pedir valores a guardar en conjunto 1
	printf("¿Cuales valores quieres guardar en el conjunto 1?\n");
		for(i=0; i<c1; i++){
			printf("Introduce el digito-->");
			scanf(" %c", &con1[i]);
		}
	//Pedir valores a guardar en conjunto 2
	printf("¿Cuales valores quieres guardar en el conjunto 2?\n");
		for(i=0; i<c2; i++){
			printf("Introduce el digito-->");
			scanf(" %c", &con2[i]);
		}
			
	//Muestra de menú de opciones
	do{ //Inicio de ciclo de menu
		printf("\n¿Que quieres hacer?\n___________________\n| 1.Editar numeros |\n| 2.Operaciones    |\n| 3.Vaciar todo    |\n| 4. Salir         |\n|__________________|\n");
		scanf("%d", &a);
		//Inicio de opciones de menu1
		if(a==1){ //Opción 1: Editar valores
			printf("¿Qué conjunto quieres editar?\n");
			scanf("%d", &b);
			if(b==1){//En conjunto 1
			printf("¿Que cupo quieres editar?\n");
				scanf("%d", &c);
				while(con1[c]!='\0'){
					con1[c]=0;
					printf("Editado cupo %c", con1[c]);
				}
			}else if(b==2){//En conjunto 2
			printf("¿Que cupo quieres editar?\n");
				scanf("%d", &c);
				while(con2[c]!='\0'){
					con2[c]=0;
					printf("Editado cupo %d", con2[c]);
				}
			}
		}else if(a==2){//Opción 2: Realizar operaciones
			//Definir variables, parte tres
			char interseccion12, diferencia12, complemento12;
			int valor_en1, valor_en2, valor_en12, tamano=0;
			printf("\n¿Que operaciones quieres hacer?\n________________\n| 1.Union       |\n| 2.Interseccion|\n| 3.Diferencia  |\n| 4.Complemento  |\n|________________|\n");
			scanf("%d", &b);
			if(b==1){//Opción 1: Unión
				char *union12 = (int *)malloc((c1 + c2) * sizeof(int));
				int tamano_union12 = 0;
				for (i = 0; i < c1; i++) {
				    union12[i] = con1[i];
				    tamano_union12++;
				}
				for (j = 0; j < c2; j++) {
				    int valor_en2 = con2[j];
				    int valor_en12 = 0;
				    for (k = 0; k < c1; k++) {
				        if (valor_en2 == con1[k]) {
				            valor_en12 = 1;
				            break;
				        }
				    }
				    if (!valor_en12) {
				        union12[tamano_union12] = valor_en2;
				        tamano_union12++;
				    }
				}
				printf("La union es: ");
				for (i = 0; i < tamano_union12; i++) {
				    printf("%c ", union12[i]);
				}
			}else if(b==2){//Opción 2: Intersección
				int interseccion12[c1];
				int tamano = 0; 
				
				for(i=0; i<c1; i++){
				    int valor_en1 = con1[i];
				    for(j=0; j<c2; j++){
				        int valor_en2 = con2[j];
				        if(valor_en1 == valor_en2){
				            interseccion12[tamano] = valor_en1; // Actualizar el arreglo interseccion12
				            tamano++;
				        }
				    }
				}
				printf("La interseccion es: ");
				for(i=0; i<tamano; i++){ 
				    printf("%c ", interseccion12[i]);
				}
			}else if(b==3){//Opción 3: Diferencia
				int diferencia12[c1]; // Definir el arreglo fuera del ciclo
				int tamano_diferencia = 0; // Inicializar la variable de tamaño
				
				for(i = 0; i < c1; i++) {
				    int valor_en1 = con1[i];
				    int valor_en12 = 0;
				    for(j = 0; j < c2; j++) {
				        int valor_en2 = con2[j];
				        if(valor_en1 == valor_en2) {
				            valor_en12 = 1;
				            break;
				        }
				    }
				    if(!valor_en12) {
				        diferencia12[tamano_diferencia] = valor_en1; // Asignar el valor al arreglo
				        tamano_diferencia++; // Incrementar el tamaño
				    }
				}
				
				printf("La diferencia es: ");
				for(i = 0; i < tamano_diferencia; i++) {
				    printf("%c ", diferencia12[i]);
				}
			}else if(b==4){//Opción 4: Complemento
				int complemento12[c1];
				int tamano = 0;
				for (i = 1; i <=10; i++) {
				    int si = 0;
				    for (j = 0; j < c1; j++) {
				        if (con1[j] == i) {
				            si = 1;
				            break;
				        }
				    }
				    if (!si) {
				        complemento12[tamano] = i;
				        tamano++;
				    }
				}
				printf("El complemento es:\n");
				for(i=0; i<tamano; i++) {
				    printf("%c ", complemento12[i]);
				}
			}
		}else if(a==3){//Opción 3: Vaciar conjuntos
			printf("¿Que conjunto quieres vaciar?\n");
			scanf("%d", &b);
			if(b==1){//En conjunto 1
				con1[c1]='\0';
				if(con1[0]=='\0'){
					printf("Vaciado conjunto 1 exitosamente :D");
				}else {
					printf("No se pudo vaciar, perdón :(");
				}
			}else if(b==2){//En conjunto 2
				con2[c2]='\0';
				if(con2[0]=='\0'){
					printf("Vaciado conjunto 2 exitosamente :D");
				}else {
					printf("No se pudo vaciar, perdon :(");
				}
			}
		}printf("\n¿Que quieres hacer?\n__________________\n| 1. volver a menu |\n| 2. salir       |\n________________\n");
			scanf("%d", &d);
	}while(d==1);
	//Cierre de programa
	printf("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\nGracias por usar el programa, adios :D\a");
	return 0;	
}
