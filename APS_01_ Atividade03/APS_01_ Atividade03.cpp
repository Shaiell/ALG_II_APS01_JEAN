#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

/*3)	Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo,
a mais gordo e o mais magro, para isto você deve fazer um programa que pergunte a cada um dos clientes
da academia seu código, sua altura e seu peso. O final da digitação de dados deve ser dada quando o usuário
digitar 0 (zero) no campo código. Ao encerrar o programa também deve ser informados os códigos e valores
do cliente mais alto, do mais baixo, do mais gordo e do mais magro, além da média das alturas e dos pesos
dos clientes.*/

int main()
{
	int codigo=0;
	int codpesomenor=0;
	int codpesomaior=0;
	int codalturamenor=0;
	int codalturamaior=0;
	char nome[50];
	char nomepesomaior[50];
	char nomepesomenor[50];
	char nomealturamaior[50];
	char nomealturamenor[50];
	float altura=0;
	float peso=0;
	float pesomaior = 0;
	float pesomenor = 999;
	float alturamaior = 0;
	float alturamenor = 999;
	float mediap=0;
	float mediah = 0;
	int cont=0;

	setlocale(LC_ALL, "Portuguese");

	printf("Programa para academia!\n\n");

	printf("Informe seu codigo: \n");
	scanf_s("%i", &codigo);
	while (codigo != 0) {
		getchar();
		printf("informe seu nome: \n");
		gets_s(nome);
		printf("informe a sua altura: \n");
		scanf_s("%f", &altura);
		printf("informe o seu peso: \n");
		scanf_s("%f", &peso);
		mediah = mediah + altura;
		mediap = mediap + peso;
		cont = cont + 1;
		if (peso < pesomenor) {
			pesomenor = peso;
			strcpy_s(nomepesomenor, nome);
			//nomepesomenor = nome;
			codpesomenor = codigo;
		}
		if (peso > pesomaior) {
			pesomaior = peso;
			strcpy_s(nomepesomaior, nome);
			//nomepesomaior[50] = nome[50];
			codpesomaior = codigo;
		}
		if (altura < alturamenor) {
			alturamenor = altura;
			strcpy_s(nomealturamenor, nome);
			//nomealturamenor[50] = nome[50];
			codalturamenor = codigo;
		}
		if (altura > alturamaior) {
			alturamaior = altura;
			strcpy_s(nomealturamaior, nome);
			//nomealturamaior[50] = nome[50];
			codalturamaior = codigo;
		}

		system("cls");
		printf("Informe seu codigo: \n");
		scanf_s("%i", &codigo);
	}

	mediap = mediap / cont;
	mediah = mediah / cont;

	if (peso != 0) {
		printf("O aluno %s de codigo %i, tem o menor peso, que é %.2fKg.\n\n", nomepesomenor, codpesomenor,  pesomenor);
		printf("O aluno %s de codigo %i, tem o maior peso, que é %.2fKg.\n\n", nomepesomaior,codpesomaior, pesomaior);
		printf("O aluno %s de codigo %i, é o mais baixo com %.2fM de altura.\n\n",nomealturamenor, codalturamenor,  alturamenor);
		printf("O aluno %s de codigo %i, é o mais alto com %.2fM de altura.\n\n",nomealturamaior, codalturamaior,  alturamaior);
		printf("A media  de peso da academia é: %.2fKG\n\n",mediap);
		printf("A media  de altura da academia é: %.2fM\n\n", mediah);
	}
	else
	{
		printf("Não tem alunos cadastrados\n\n");
	}
}


