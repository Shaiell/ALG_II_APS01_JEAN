#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

/*9)	A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços executados nos "pes", 
		nas "mãos" e o serviço de podologia das cinco manicures. Sabendo-se que cada uma ganha 50% do que faturou ao mês, 
		criar um programa que possa calcular e imprimir quanto cada uma vai receber, uma vez que não têm carteiras assinadas,
		os valores, respectivamente, são: R$10,00, R$15,00 e R$30,00.*/

int main()
{
	int nota[5][3];
	int x = 0, y = 0;
	float fat[5][3], pag[5], pagt[5], fatu[5];

	setlocale(LC_ALL,"portuguese");

	printf("                         Salão Sempre Bela\n\n");
	printf("                         Serviços:\n");
	printf("                         Mão: R$10,00\n");
	printf("                         Pé: R$15,00\n");
	printf("                         Podologia: R$30,00\n\n");


	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			if (y == 0) {
				printf("Informe quantos pés a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			if (y == 1) {
				printf("Informe quantas mãos a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			if (y == 2) {
				printf("Informe quantas podologias a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			getchar();
		}
	}

	for (x = 0; x < 5; x++) {
		pag[x] = 0;
		fatu[x] = 0;
		pagt[x] = 0;
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			fat[x][y] = 0;
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			if (y == 0) {
				fat[x][y] = nota[x][y] * 10 ;
			}
			if (y == 1) {
				fat[x][y] = nota[x][y] * 15;
			}
			if (y == 2) {
				fat[x][y] = nota[x][y] * 30;
			}
			pag[x] = float(fat[x][y] * 0.50);
			fatu[x] = float(fatu[x] + fat[x][y]);
			pagt[x] = float(pagt[x] + pag[x]);
		}
	}

	for (x = 0; x < 5; x++) {		
		if (x == x) {
			printf("A %iª manicure fez %i mão, %i pés e %i podologias.\n", x + 1, nota[x][0], nota[x][1], nota[x][2]);
			printf("O valor total das mãos feitas pela %iª manicure foi R$%.2f, o pé foi R$%.2f e a podologia foi R$%.2f.\n", x + 1, fat[x][0], fat[x][1], fat[x][2]);
			printf("O faturamento total da %iª manucure foi de R$%.2f, o seu salario foi de R$%.2f.\n\n\n", x + 1, fatu[x], pagt[x]);
		}
	}
}
