#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "pch.h"
#include <iostream>

/*12)	Um clube que tem 12 associados deseja que você faça um programa para armazenar os dados cadastrais desses associados. 
		Os dados são: nome, dia, mês e ano de nascimento, valor da mensalidade e quantidade de dependentes. O programa deverá 
		ler os dados e imprimir depois na tela. Deverá também informar o associado (ou os associados) com o maior número de dependentes.*/


struct dados {
	char nome[80];
	int dia = 0, mes = 0, ano = 0, depen = 0;
	float mensal = 0;
};

int main()
{
	struct dados d[12];
	int cont = 0, mdep = 0;

	setlocale(LC_ALL, "portuguese");

	for (cont = 0; cont < 3; cont++) {
		printf("informe o nome do %iº associado: ", cont + 1);
		fgets(d[cont].nome, 80, stdin);
		d[cont].nome[strlen(d[cont].nome) - 1] = '\0';
		printf("Informe o dia do seu nascimento: ");
		scanf_s("%i", &d[cont].dia);
		printf("Informe o mes do seu nascimento em numeral: ");
		scanf_s("%i", &d[cont].mes);
		printf("Informe o ano do seu nascimento: ");
		scanf_s("%i", &d[cont].ano);
		printf("Informe o valor da mensalidade: ");
		scanf_s("%f", &d[cont].mensal);
		printf("Informe a quantidade de dependentes: ");
		scanf_s("%i", &d[cont].depen);
		getchar();
	}

	printf("\n");
	for (cont = 0; cont < 12; cont++) {
		printf("O associado %s nasceu em %i/%i/%i paga uma mensalidade de R$%.2f e tem %i dependentes.\n", d[cont].nome, d[cont].dia, d[cont].mes, d[cont].ano, d[cont].mensal, d[cont].depen);
	}

	for (cont = 0; cont < 12; cont++) {
		if (d[cont].depen > mdep) {
			mdep = d[cont].depen;
		}
	}

	printf("\nAbaixo os associados com o maior numero de dependentes: \n");
	for (cont = 0; cont < 12; cont++) {
		if (d[cont].depen == mdep) {
			printf("O associado %s tem %i dependentes.\n", d[cont].nome, d[cont].depen);
		}
	}
}