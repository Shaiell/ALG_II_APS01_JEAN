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

/*5)	Escreva um algoritmo que leia o código e o salário de 20 funcionários de uma empresa. 
Ao final, o algoritmo deve determinar o total da folha de pagamento da empresa e sua média salarial.*/

int main()
{
	char nome[50];
	float salario = 0, media = 0, total = 0;
	int cont = 0;

	setlocale(LC_ALL, "Portuguese");

	for (cont = 0; cont < 20; cont++) {
		printf("informe o nome do %iº funcionario: ",cont+1);
		gets_s(nome);
		printf("Informe o salario do funcionario %s: ", nome);
		scanf_s("%f", &salario);
		media = media + salario;
		getchar();
	}
	total = media;
	media = media / cont;

	printf("A empresa tem %i funcionarios, o total da folha de pagamento é R$%.2f e a media salaria é R$%.2f.\n\n",cont,total,media);

}

