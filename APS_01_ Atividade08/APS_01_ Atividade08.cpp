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

/*8)	Faça um programa que carregue uma matriz 12x4 com os valores das vendas de uma loja, onde cada linha representa 
		um mês do ano e cada coluna representa uma semana do mês. Calcule e mostre;
        - o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
        - o total vendido em cada semana durante todo o ano;
        - o total vendido pela loja no ano.
*/

int main()
{
	float vendas[12][4], tmes[12], tsem[4], tano=0;
	char mes[15][12];
	int x = 0, y = 0;

	setlocale(LC_ALL, "portuguese");
	
	strcpy_s(mes[1], "Janeiro");
	strcpy_s(mes[2], "Fevereiro");
	strcpy_s(mes[3], "Março");
	strcpy_s(mes[4], "Abril");
	strcpy_s(mes[5], "Maio");
	strcpy_s(mes[6], "Junho");
	strcpy_s(mes[7], "Julho");
	strcpy_s(mes[8], "Agosto");
	strcpy_s(mes[9], "Setembro");
	strcpy_s(mes[10], "Outubro");
	strcpy_s(mes[11], "Novembro");
	strcpy_s(mes[12], "Dezembro");
	
	for (x = 0; x < 12; x++) {
		for (y = 0; y < 4; y++) {
			printf("informe a venda da %iª semana do mes de %s: ",y+1,mes[x+1]);
			scanf_s("%f", &vendas[x][y]);
		}
	}

	for (x = 0; x < 12; x++) {
		tmes[x] = 0;
		for (y = 0; y < 4; y++) {
			tmes[x] = tmes[x] + vendas[x][y];
		}
	}

	for (y = 0; y < 4; y++) {
		tsem[y] = 0;
		for (x = 0; x < 12; x++) {
			tsem[y] = tsem[y] + vendas[x][y]; 
		}
	}

	for (x = 0; x < 12; x++) {
		for (y = 0; y < 4; y++) {
			tano = tano + vendas[x][y];
		}
	}

	for (x = 0; x < 12; x++) {
		printf("O total de vendas no mês de %s foi de R$%.2f.\n", mes[x + 1], tmes[x]);
	}

	for (y = 0; y < 4; y++) {
		printf("O total de vendas das %iªs semanas foi de R$%.2f.\n", y + 1, tsem[y]);
	}
	printf("O total de vendas no ano foi de R$%.2f.\n", tano); 
}

