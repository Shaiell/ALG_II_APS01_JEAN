#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

/*2)	Uma empresa abre uma vaga para Desenvolvedor onde o candidato deve atender alguns requisitos para ser chamado 
para a entrevista, os requisitos são:

- Ser maior de 21 anos;
- Ter curso superior completo;
- Ter experiência em Linguagem C;
- Não ter antecedentes criminais.

Faça um programa que analise o perfil do candidato e informe ao Analista de RH se o candidato pode ser chamado 
para a entrevista ou não.

Caso não possa,  informar qual o requisito que o mesmo não apresenta.
*/

int main()
{
	char nome[50];
	char linguagem;
	char curso;
	char antecedentes;
	int idade;

	setlocale(LC_ALL, "Portuguese");

	printf("Abaixo questionario para vaga de Desenvolvedor.\n\n");
	printf("Informe seu Nome: ");
	gets_s(nome);
	printf("\nInforme sua idade: ");
	scanf_s("%i", &idade);

	if (idade > 21) {
		printf("\n\nVocê possui curso superior completo?\n");
		scanf_s("\n%c", &curso);
		if (curso == 'S' || curso == 's') {
			printf("\nVocê possui experiencia em Linguagem de programação C?\n");
			scanf_s("\n%c", &linguagem);
			if (linguagem == 'S' || linguagem == 's') {
				printf("\nVocê possui antecedentes criminais?\n");
				scanf_s("\n%c", &antecedentes);
				if (antecedentes == 'N' || antecedentes == 'n') {
					printf("%s, você sera contratado.\n\n", nome);
				}
				else
				{
					printf("%s, infelizmente não pode ser contratado pois possui antecedentes criminais.\n\n", nome);
				}
				
			}
			else
			{
				printf("%s, infelizmente não possui experiencia em linguagem de programação C.\n\n", nome);
			}

		}
		else
		{
			printf("%s, infelizmente não tens curso superior para se candidatar a vaga.\n\n", nome);
		}

	}
	else {
		printf("%s, infelizmente não tens a idade necessaria para se candidatar a vaga.\n\n",nome);
	}


}

