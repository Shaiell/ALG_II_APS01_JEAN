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

/*11)	Definir uma estrutura para representar os dados dos componentes de um computador, armazenando o nome do componente e o preço.
		Implementar uma aplicação que permita cadastrar até 20 componentes em um micro, listar os componentes cadastrados e totalizar o 
		custo total do equipamento. 
*/

struct computador {
	char nome[50];
	float preco;
};

int main()
{
	struct computador c[20];
	int cont=0;
	float custototal=0;

	setlocale(LC_ALL, "portuguese");

	for (cont = 0; cont < 2; cont++) {
		printf("Informe o nome do %iº componente: ", cont + 1);
		//gets_s(c[cont].nome);
		fgets(c[cont].nome, 50 ,stdin);
		c[cont].nome[strlen(c[cont].nome) - 1] = '\0';
		printf("Informe o Valor do componente: ");
		scanf_s("%f", &c[cont].preco);
		getchar();
	}

	for (cont = 0; cont < 20; cont++) {
		custototal = custototal + c[cont].preco;
	}

	printf("\nO custo total dos componentes foi R$%.2f.\n\n", custototal);
	printf("Os componentes utilidados foram: \n");

	for (cont = 0; cont < 20; cont++) {
		printf("%s de valor R$%.2f\n",c[cont].nome, c[cont].preco );
	}
}

