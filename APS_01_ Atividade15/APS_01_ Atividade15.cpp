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

/*15)	Faça um programa para gerar automaticamente números, entre 0 e 99, de uma cartela de bingo. 
		Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não 
		ter números repetidos dentro das cartelas! Lembre-se que é importante armazenar os números 
		sorteados em uma tabela com 5 linhas e 5 colunas,pois no sorteio do bingo vale pontos quem 
		completar primeiro uma linha ou uma coluna.O programa deve gerar a cartela e depois exibir na 
		tela a cartela gerada, linha a linha,coluna por coluna.*/

int main()
{
	int bingo[5][5];
	int x, y, c, v, valor;

	srand(time(NULL));

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			bingo[x][y] = rand() % 99;
		}
	}
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			valor = bingo[x][y];
			for (c = 0; c < 5; c++)
			{
				for (v = 0; v < 5; v++)
				{
					if ((bingo[c][v] == valor) && ((x != c) || (y != v)))
					{
						bingo[c][v] = rand() % 99;
					}
				}
			}
			valor = bingo[x][y];
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 5; y++) {
			printf("%i ", bingo[x][y]);
		}
		printf("\n");
	}
}
	
