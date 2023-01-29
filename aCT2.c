/*******************PRESENTACIÓN*******************
NOMBRE: Alejandra Estefanía Martínez Muñoz
FECHA: 25 de enero de 2023
PROGRAMA: actividad2.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERÍA EN COMPUTACIÓN / 2DO SEMESTRE
PROFESOR: Carlos Javier Cruz Franco
DESCRIPCIÓN: Crear programa usando caracteres de escape y cadenas de control
**************************************************/ 
#include <stdio.h> //Agrega librería
#include <string.h>

int main () { //Programa principal

	//Definición de variables
	int a, b, c, d;
	char re[2], name[15];

	//Solicitud de datos
	printf( "Hola, ¿qué tal\? :)\n" );
	printf( "¿cuantas manos tienes?\n" );
	scanf( "%d", &a );
	printf( "qué muchas\a \n");
	printf( "Esta línea no se va a ver\r");
	printf( "pon dos anos y te dire cuantos anos cumples\r \nano de nacimiento:\n");
	scanf( "%i", &b );
	printf("\nano actual:\n");
	scanf( "%i", &c );
	d=c-b;
	printf("\n tienes: %u", d);
	printf("\n le atine\?\n");
	scanf("%s", &re);
	printf("¿Y cómo te llamas\?\n");
	scanf("%s", &name);
	printf("\n Entonces\a\n te llamas, %s", name);
	printf("\n\a tienes, %u", d);
	printf("\n mira un cuadrado\a\a\a\a\a\a\a\a\a\a\a\a\a\n *********\n *\t *\n *\t *\n *\t *\n *\t *\n *********\n");
	return 0;
}
