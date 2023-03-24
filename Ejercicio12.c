/*******************PRESENTACI�N********************
NOMBRE: Alejandra Estefan�a Mart�nez Mu�oz
FECHA: 21 de marzo de 2023 HOY ES primavera
PROGRAMA: ejercicio12.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIER�A EN COMPUTACI�N / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCI�N: Hacer directorio con datos de compa�eros
***************************************************/
#include <stdio.h>//Incluir librer�as
#include <string.h>
struct persona{ //Declarar variables con estructura
	char nombre[20], apellido[25], ciudad[20], estado[15], municipio[20], calle[30]; 
	int edad[2], estatura[3];
}person[5];
//Apartado de voids
void agregar(){ //Agregar personas al directorio
	int selec; //otra declaraci�n de variable porque marca error
	printf("�Donde quieres guardar a la persona?\n--------------\n|  1.  ...   |\n|  2.  ...   |\n|  3.  ...   |\n|  4.  refri |\n|  5.  ...   |\n--------------\n    ->");
	scanf("%i", &selec);
	printf("---------------------------\n|  Nombre: ");
	scanf("%s", person[selec].nombre);
	printf("|  Apellido: ");
	scanf("%s", person[selec].apellido);
	printf("|  Ciudad: ");
	scanf("%s", person[selec].ciudad);
	printf("|  Estado: ");
	scanf("%s", person[selec].estado);
	printf("|  Municipio: ");
	scanf("%s", person[selec].municipio);
	printf("|  Calle: ");
	scanf("%s", person[selec].calle);
	printf("|  Edad: ");
	scanf("%i", person[selec].edad);
	printf("|  Estatura: ");
	scanf("%i", person[selec].estatura);
	printf("---------------------------\n");
}
void lista(){ //Muestra la lista con las personas guardadas
	printf("----------------------\n");
    for(int i=1; i<=5; i++){
        if(person[i].nombre!=0){
            printf("|  %d. %s %s\n", i, person[i].nombre, person[i].apellido);
        }
    }
    char c; //otra declaraci�n de variable porque marca error
    printf("----------------------\n - �Seleccionar? s/n -> ");
    scanf(" %c", &c);
    if(c=='s'){
        editar();
    }
}
void editar(){ //Edita datos de la persona seleccionada en void lista
	int selec; //otra declaraci�n de variable porque marca error
	printf(" - �A cual persona?\n    ->");
	scanf("%i", &selec);
    printf("-------------------------\n 1. Nombre: %s\n", person[selec].nombre);
    printf(" 2. Apellido: %s\n", person[selec].apellido);
    printf(" 3. Ciudad: %s\n", person[selec].ciudad);
    printf(" 4. Estado: %s\n", person[selec].estado);
    printf(" 5. Municipio: %s\n", person[selec].municipio);
    printf(" 6. Calle: %s\n", person[selec].calle);
    printf(" 7. Edad: %i\n", person[selec].edad);
    printf(" 8. Estatura: %i\n", person[selec].estatura);
    printf("-------------------------\n - �Que quieres editar? ->");
    scanf("%i", &selec);
    printf(" - Correccion -> ");
    switch (selec){ //Seg�n la persona seleccionada modifica
        case 1: //Opci�n 1: Nombre
            scanf("%s", person[selec].nombre);
            break;
        case 2: //Opci�n 2: Apellido
            scanf("%s", person[selec].apellido);
            break;
        case 3: //Opci�n 3: Ciudad
            scanf("%s", person[selec].ciudad);
            break;
        case 4: //Opci�n 4: Estado
            scanf("%s", person[selec].estado);
        break;
        case 5: //Opci�n 5: Municipio
        	scanf("%s", person[selec].municipio);
        break;
        case 6: //Opci�n 6: Calle
        	scanf("%s", person[selec].calle);
        break;
        case 7: //Opci�n 7: Edad
        	scanf("%i", person[selec].edad);
        break;
        case 8: //Opci�n 8: Estatura
        	scanf("%i", person[selec].estatura);
        break;
	}
}
int main(){ //Programa inicial
	int a=0, b=0; //Declarar variables para opciones en men� 
	do{//Inicio ciclo de men�
	printf("  D I R E C T O R I O\n-----------------------\n|  1. Agregar persona |\n|  2. Ver lista       |\n-----------------------\n\t->");
	scanf("%i", &a);
		switch(a){ //Seg�n la opci�n seleccionada
			case 1: //Opci�n 1: Agregar persona
				agregar(); //Llamar a void
			break;
			case 2: //Opci�n 2: Ver lista
				lista(); //Llamar a void
			break;
		}printf("____________________\n|  1. volver a menu |\n|  2. salir         |\n|___________________|\n\t->");
		scanf("%i", &b); //Pregunta para repetir o terminar programa
	}while(b==1);
	printf("    A D I O S  :D");
	return 0; //Termina programa
}
