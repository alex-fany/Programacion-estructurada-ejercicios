/*******************PRESENTACIÓN********************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 24 de marzo de 2023
PROGRAMA: ejercicio13.c
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Hacer juego del gato
***************************************************/
#include <stdio.h>//Incluir libreria
//Apartado de voids
void muestra(char gato[3][3]){//Para mostrar los lugares ocupados o no
	printf("  | %c", gato[0][0]); //Fila 0
	printf(" | %c", gato[0][1]);
	printf(" | %c |", gato[0][2]);
	printf("\n  | %c", gato[1][0]); //Fila 1
	printf(" | %c", gato[1][1]);
	printf(" | %c |", gato[1][2]);
	printf("\n  | %c", gato[2][0]); // Fila 2
	printf(" | %c", gato[2][1]);
	printf(" | %c |", gato[2][2]);
}
int ganador(char gato[3][3]){//Condiciones para determinar ganador
//Declaracion de variables a usar dentro del void
    for (int i=0; i<3; i++){//Revisar filas
        if (gato[i][0]=='x'&&gato[i][1]=='x'&&gato[i][2]=='x'||gato[i][0]=='o'&&gato[i][1]=='o'&&gato[i][2]=='o'){
            printf("\n - ¡Ha ganado el jugador %c!\n", gato[i][0]);
        }
    }
    for (int j=0; j<3; j++){//Revisar columnas
        if (gato[0][j]=='x'&&gato[1][j]=='x'&&gato[2][j]=='x'||gato[0][j]=='o'&&gato[1][j]=='o'&&gato[2][j]=='o'){
            printf("\n - ¡Ha ganado el jugador %c!\n", gato[0][j]);
        }
    }
    if(gato[0][0]=='x'&&gato[1][1]=='x'&&gato[2][2]=='x'||gato[0][0]=='o'&&gato[1][1]=='o'&&gato[2][2]=='o'){//Revisar diagonales
        printf("\n - ¡Ha ganado el jugador %c!\n", gato[0][0]);
    }
    if(gato[0][2]=='x'&&gato[1][1]=='x'&&gato[2][0]=='x'||gato[0][2]=='o'&&gato[1][1]=='o'&&gato[2][0]=='o'){
        printf("\n - ¡Ha ganado el jugador %c!\n", gato[0][2]);
    }
}
void pregunta(char volver){//Repetir el juego
	printf("\n - ¿Volver a jugar?\n    s / n\n    ->");
	scanf("%c", &volver);
}
void lugar(char gato[3][3]){//Para seleccionar el lugar poner jugando contra computadora
	int lug;//Declaracion de variables a usar dentro del void
	char volver;
	do{//Abrir ciclo
	printf(" - Selecciona el jugar\n\t1   |   2   |   3\n\t4   |   5   |   6\n\t7   |   8   |   9\n\t   ->");
	scanf("%i", &lug);
	getchar();
		switch(lug){
			case 1://Lugar [0][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][0]);
				getchar();//Esta cosa la tuve que poner porque se brincaba todo :O
			break;
			case 2://Lugar [0][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][1]);
				getchar();
			break;
			case 3://Lugar [0][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][2]);
				getchar();
			break;
			case 4://Lugar [1][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][0]);
				getchar();
			break;
			case 5://Lugar [1][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][1]);
				getchar();
			break;
			case 6://Lugar [1][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][2]);
				getchar();
			break;
			case 7://Lugar [2][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][0]);
				getchar();
			break;
			case 8://Lugar [2][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][1]);
				getchar();
			break;
			case 9://Lugar [2][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][2]);
				getchar();
			break;
		}muestra(gato);//Llamar a voids
	ganador(gato);
	}while(ganador);
	pregunta(volver);
}
void lugar_amigo(char gato[3][3]){//Para seleccionar el lugar poner jugando contra amigo
	int lug;//Declaracion de variables a usar dentro del void
	char volver;
	do{//Inicio de ciclo
	printf(" - Selecciona el jugar\n\t1   |   2   |   3\n\t4   |   5   |   6\n\t7   |   8   |   9\n\t   ->");
	scanf("%i", &lug);
	getchar();
		switch(lug){
			case 1://Lugar [0][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][0]);
				getchar();
			break;
			case 2://Lugar [0][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][1]);
				getchar();
			break;
			case 3://Lugar [0][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[0][2]);
				getchar();
			break;
			case 4://Lugar [1][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][0]);
				getchar();
			break;
			case 5://Lugar [1][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][1]);
				getchar();
			break;
			case 6://Lugar [1][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[1][2]);
				getchar();
			break;
			case 7://Lugar [2][0]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][0]);
				getchar();
			break;
			case 8://Lugar [2][1]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][1]);
				getchar();
			break;
			case 9://Lugar [2][2]
				printf(" - Escoge el signo:\n\tx |  o\n\t ->");
				scanf("%c", &gato[2][2]);
				getchar();
			break;
		}muestra(gato);//Llamar a voids
	ganador(gato);
	}while(ganador);
	pregunta(volver);
}
int main (){//Programa principal
	int modo;//Declarar variables para selecciones
	char volver, gato[3][3];
	printf("     J U E G O    G A T O   #\n");//Muestra de menu de opciones
	do{ printf("--------------------------------\n|  1. Jugar contra computadora |\n|  2. Jugar contra amigo       |\n--------------------------------\n\t\t-> ");
	scanf("%i", &modo);
		switch(modo){
			case 1://Jugar gato contra computadora
				lugar(gato);
			break;
			case 2://Jugar gato contra amigo
				lugar_amigo(gato);
			break;
		}pregunta(volver);
	}while(volver=='s');//Para repetir ciclo do
	printf("  A D I O S  :D");
	return 0;//Termino de programa
} 
