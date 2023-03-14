/*******************PRESENTACIÓN********************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 9 de marzo de 2023
PROGRAMA: ejercicio10.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Ordenar valores de vector con algoritmos y recursividad
***************************************************/
#include <stdio.h>//Incluir librerías
#include <stdlib.h>
#include <string.h>
//Declarar variables para voids
int b, c, vect[50], i, j, k, mayor, menor, pivote=0;
//Apartado de voids
void bubble(int vect[], int a){//Ordenamiento Bubble 
	for(i=1; i<a-1; i++){
		for(j=0; j<a-i-1; j++){
			if(vect[j]>vect[j+1]){
				pivote=vect[j];
				vect[j]=vect[j+1];
				vect[j+1]=pivote;
			}
		}
	}
}
void quick(int*a, int*b){//Ordenamiento QuickSort, parte 1
   int vect2=*a;
    *a=*b;
    *b=vect2;
    }
int part(int vect[], int menor, int mayor){ //Quicksort, parte 2
    int pivote=vect[mayor]; // Selecciona el último elemento como pivote
    int i=(menor-1);
    for (int j=menor; j<=mayor-1; j++){
        // Si el elemento actual es menor o igual al pivote
        if (vect[j]<=pivote){
            i++; 
            quick(&vect[i], &vect[j]);
        }
    }
    quick(&vect[i+1], &vect[mayor]);
    return (i+1);
}
void quicksort(int vect[], int menor, int mayor){ //Quicksort, parte 3 final
    if(menor<mayor){
        int jose=part(vect, menor, mayor);
        quicksort(vect, menor, jose - 1);
        quicksort(vect, jose + 1, mayor);
    }
}
void buscar(int vect[], int juan, int paco){ //Búsqueda binaria de número en vector
    printf("¿Cual valor buscas?\n");
    int busca;
    scanf("%d", &busca);
    int pedro, encontrado=0;
    while(juan<=paco&&!encontrado){
        pedro=(juan+paco)/2;
        if(vect[pedro]==busca){
            encontrado = 1;
        }
        else if(vect[pedro]>busca){
            paco=pedro-1;
        }
        else{
            juan=pedro+1;
        }
    }
    if(encontrado){
        printf("El numero está en el lugar -> %d\n", juan+pedro);
    }
    else{ //Por si no hay
        printf("El valor que buscas no existe :O\n");
    }
}
void llenar(){ //Llena el vector con números al azar
	for (int i=0; i<50; i++){
	vect[i]=rand()%100;
	}printf("- Vector llenado.");
}
void imprimir(int vect[], int a){ //Para imprimir los vectores pero con recursividad
	static int i=1;
	if(a==0 || i>a){
        return;
    }else{
        imprimir(vect, a-1); //Llamada recursiva
        printf("| %i. %d |", i, vect[a-1]);
        i++;
    }
}
int main() { //Programa principal
	int lug, a=0; //Solo porque marcaba error pero creo que ya
	do{//Solicitud de longitud de vector
		printf("Decide la longitud de tu vector\n(puede ser desde 2 hasta 50 espacios)\n");
		scanf("%d", &a);
	}while(a<2||a>50);//Solicitud de guardado de números en vector
		printf("¿Cuales valores quieres guardar?\n");
	for(i=0; i<a; i++){ //Bucle para pedir valores
		printf("Introduce el valor --> ");
		scanf("%d", &vect[i]);
	}
	do{//Inicio de ciclo con menú de opciones
	printf("\n_____________________\n|  1. Ver vector     |\n|  2. Editar         |\n|  3. Acomodar       |\n|  4. Buscar         |\n|  5. Llenar al azar |\n|  6. Vaciar         |\n|____________________|\n\t->");
	scanf("%d", &b);
		if(b==1){ //Opción 1: Ver valores guardados en vector
			imprimir(vect, a);
		}else if(b==2){ //Opción 2: Editar vector
			printf("no se :c\n");
		}else if(b==3){ //Opción 3: Acomodar valores de vector, menú de opciones parte dos
			printf("_____________________\n|    1         2     |\n| Bubble   QuickSort |\n|____________________|\n\t->");
			scanf("%d", &c);
			printf("\nOrden original del vector:\n");
			imprimir(vect, a);
			switch(c){ //Según la opción seleccionada
				case 1: //Con algoritmo de ordenamiento BubbleSort, llamar void
					bubble(vect, a);
				break;
				case 2: //Con algoritmo de ordenamiento QuickSort, llamar void
					quicksort(vect, 0, a-1);
				break;
			}printf("\nVector ordenado:\n"); imprimir(vect, a);//Muestra vector ordenado al final del switch
		}else if(b==4){ //Búsqueda binaria, llamar void
			buscar(vect, 0, a);
		}else if(b==5){ //Llenado de vector al azar
			llenar();
		}else if(b==6){ //Vaciar vector
			for(i=0; i<a; i++){
				vect[i]=0;
			}if(vect[i]==0){
				printf("Vaciado exitosamente\n"); imprimir(vect, a);
			}else{ //Por si acaso hay algún error así no más
				printf("No pude soy un pndejo lose");
			} //Pregunta para repetir ciclo
		}printf("\n___________________\n| 1. volver a menu |\n| 2. salir         |\n|__________________|\n\t->");
		scanf("%d", &b);
	}while(b==1);
	printf("Adios, que le vaya bien :D");
	return 0; //Terminar programa
}
