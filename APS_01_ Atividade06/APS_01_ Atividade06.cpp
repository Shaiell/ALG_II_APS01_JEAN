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

/*6)	Faça um algoritmo que leia o nome, a idade e o sexo (‘M’ para masculino e ‘F’ para feminino) 
		de um grupo de 200 estudantes e determine?

•	quantos são do sexo feminino e maior de 21 anos;
•	quantos são do sexo masculino e maior de 18 anos;
*/

struct alunos {
	char nome[50];
	int idade;
	char sexo;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	struct alunos a[200];
	int cont = 0, maiorF = 0, maiorM = 0;

	for (cont = 0; cont < 200; cont++) {
		printf("informe o nome do %iº aluno: ", cont+1);
		gets_s(a[cont].nome);
		printf("informe a idade :");
		scanf_s("%i", &a[cont].idade);
		printf("informe o sexo, F para feminino e M para Masculino: ");
		scanf_s("\n%c", &a[cont].sexo);
		getchar();
		system("cls");
	}

	for (cont = 0; cont < 200; cont++) {
		if (a[cont].sexo == 'F' || a[cont].sexo == 'f') {
			if (a[cont].idade > 21) {
				maiorF = maiorF + 1;
			}
		}
		else 
		{
			if (a[cont].idade > 21) {
				maiorM = maiorM + 1;
			}
		}
	}

	printf("O curso tem %i alunos do sexo Femenino e maiores de 21 anos.\n", maiorF);
	printf("O curso tem %i alunos do sexo Masculino e maiores de 21 anos.\n\n", maiorM);

	for (cont = 0; cont < 200; cont++) {
		if (a[cont].sexo == 'F' || a[cont].sexo == 'f') {
			if (a[cont].idade > 21) {
				printf("%s tem %i anos.\n", a[cont].nome, a[cont].idade);
			}
		}
		else
		{
			if (a[cont].idade > 21) {
				printf("%s tem %i anos.\n", a[cont].nome, a[cont].idade);
			}
		}
	}
}