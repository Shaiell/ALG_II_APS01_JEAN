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

/*7)	Considerando que a media para aprovação seja 6.00, escreva um algoritmo que leia a média de 15 alunos.
		Após a leitura e armazenamento das médias em um vetor de 15 posições, indique:

a) Qual a maior nota informada.
b) Qual a menor nota informada.
c) Quantos alunos estão aprovados.
d) Quantos alunos estão reprovados.
e) Quantos alunos estão em recuperação.
f) Qual a média da turma.
*/

int main()
{
	float media[15], maiorN = 0, menorN = 10, mturma=0;
	int cont = 0, aprov=0, reprov=0;

	setlocale(LC_ALL, "portuguese");

	for (cont = 0; cont < 15; cont++) {
		printf("Informe a media do %iº aluno: ", cont + 1);
		scanf_s("%f", &media[cont]);
	}

	for (cont = 0; cont < 15; cont++) {
		mturma = mturma + media[cont];
		if (media[cont] > maiorN) {
			maiorN = media[cont];
		}
		if (media[cont] < menorN) {
			menorN = media[cont];
		}
		if (media[cont] >= 6) {
			aprov = aprov + 1;
		}
		else 
		{
			reprov = reprov + 1;
		}
	}
	mturma = mturma / cont;

	printf("A maior nota da turma foi %.2f.\n", maiorN);
	printf("A menor nota da turma foi %.2f.\n", menorN);
	printf("Foram Aprovados %i alunos.\n", aprov);
	printf("Foram Reprovados %i alunos.\n", reprov);
	printf("Foram para a recuperação %i alunos.\n", reprov);
	printf("Amedia da turma foi %.2f.\n", mturma);

	
}
