#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

/* 1)	Faça um programa que receba três notas de um aluno, calcule e imprima a média aritmética dessas notas. */

int main()
{
	float nota[3], media=0;
	int cont;
	char nome [50];

	setlocale(LC_ALL, "Portuguese");

	printf("Informe o Nome do Aluno:");
	gets_s(nome);
	for (cont = 0; cont < 3; cont++) {
		cont = cont + 1;
		printf("informe a %i º nota:",cont);
		scanf_s("%f", &nota[cont]);
		media =(float) media + nota[cont];
		cont = cont - 1;
	}
	
	media = media / cont;

	printf("\n\nO aluno %s teve a media de %.2f.\n\n",nome ,media);


}

