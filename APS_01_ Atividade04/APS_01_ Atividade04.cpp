#include "pch.h"
#include <iostream>

/*4)	Escreva um algoritmo que leia um conjunto de 50 fichas, cada uma contendo a altura e o sexo de uma pessoa 
		(1 = masculino e 2 = feminino), e calcule e imprima:
•	A maior e a menor altura da turma;
•	A média de altura das mulheres;
•	A média de altura da turma.

*/

int main() 
{
		int sexo = 0;
		int cont = 0;
		int contm = 0;
		float altura = 0;
		float maltura = 0;
		float malturamulher = 0;
		float maioraltura = 0;
		float menoraltura = 999;

		setlocale(LC_ALL, "Portuguese");
		printf("Programa para calcular alguns dados de uma turma!\n\n");

		for (cont = 0; cont < 50; cont++) {
			printf("Digite 1 para Masculino e 2 para Feminino\nInforme seu Sexo: ");
			scanf_s("%i", &sexo);
			printf("Informe a sua altura: ");
			scanf_s("%f", &altura);

			if (sexo == 2) {
				malturamulher = float(malturamulher + altura);
				contm = contm + 1;
			}
			if (altura > maioraltura) {
				maioraltura = altura;
			}
			if (altura < menoraltura) {
				menoraltura = altura;
			}
			maltura = maltura + altura;
		}

		maltura = float(maltura / cont);
		printf("\n\n");
		printf("A maior altura da turma foi: %.2fM\n\n", maioraltura);
		printf("A menor altura da turma foi: %.2fM\n\n", menoraltura);
		printf("A media de altura da turma foi: %.2fM\n\n", maltura);

		malturamulher = float(malturamulher / contm);
		if (contm != 0) {
			printf("A media de altura das mulheres da turma foi: %.2fM\n\n", malturamulher);
		}
		else
		{
			printf("Não tiveram mulheres nesta turma.\n\n"); 
		}

	}