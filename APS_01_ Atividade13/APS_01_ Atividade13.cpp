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

/*13)	Construa uma estrutura destinado a controlar despesas e dados de um condomínio de apartamentos. Os dados de cada apartamento são 
		armazenados em um vetor de estruturas. Para cada apartamento tem-se os seguintes dados: 
•	nome (do responsável) 
•	número (do apartamento) 
•	área (em m2 ) 
•	número de moradores 
•	valor (a ser pago no mês) 
	
		Faça um bloco de instruções para imprimir os dados dos apartamentos.
		Apresente também o total de moradores do condomínio. 
*/

struct apartamento {
	char nome[80];
	int numero = 0, morad = 0;
	float area = 0, valor = 0;
};

int main()
{
	struct apartamento ap[30];
	int cont = 0, tmorad = 0;

	setlocale(LC_ALL, "portuguese");

	for (cont = 0; cont < 3; cont++) {
		printf("Informe o nome de %iº Proprietario: ",cont+1);
		fgets(ap[cont].nome, 80, stdin);
		ap[cont].nome[strlen(ap[cont].nome) - 1] = '\0';
		printf("Informe o numero do AP: ");
		scanf_s("%i", &ap[cont].numero);
		printf("Informe a aréa do AP: ");
		scanf_s("%f", &ap[cont].area);
		printf("Informe o numero de moradores do AP: ");
		scanf_s("%i", &ap[cont].morad);
		printf("Informe o valor a ser pago referente as despesas do condominio: ");
		scanf_s("%f", &ap[cont].valor);
		getchar();
	}

	for (cont = 0; cont < 3; cont++) {
		tmorad = tmorad + ap[cont].morad;
	}

	printf("\n\nO total de moradores do Condominio é %i pessoas.\n\n", tmorad);

	for (cont = 0; cont < 3; cont++) {
		printf("O proprietario do Ap numero %i se chama %s, o apartamento tem %.2fM² e contem %i moradores, o total de condominio pago neste apartamento é R$%.2f.\n",
			ap[cont].numero, ap[cont].nome, ap[cont].area, ap[cont].morad, ap[cont].valor);
	}
}

