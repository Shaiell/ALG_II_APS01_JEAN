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

/*10)	Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre alunos de uma disciplina,
		sendo todas as informações do tipo inteiro: 
•	Primeira coluna: número de matrícula (use um inteiro) 
•	Segunda coluna: media das provas 
•	Terceira coluna: media dos trabalhos 
•	Quarta coluna: nota final.

Elabore um programa que: 
a)	Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos
b)	Imprima a matrícula do aluno que obteve a maior nota final (assume que so existe uma maior nota)
c)	Imprima a média aritmética das notas finais.*/

int main()
{
	int alunos[5][4], x = 0, y = 0, maiorN = 0, matric = 0;
	float mediat = 0;

	setlocale(LC_ALL, "portuguese");

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 4; y++) {
			switch (y){
				case 0:
					printf("Informe a matricula do %iº Aluno: ",x+1);
					scanf_s("%i", &alunos[x][y]);
					break;
				case 1:
					printf("Informe a media das provas do %iº aluno: ", x + 1);
					scanf_s("%i", &alunos[x][y]);
					break;
				case 2:
					printf("Informe a media dos trabalhos do %iº aluno: ", x + 1);
					scanf_s("%i", &alunos[x][y]);
					break;
				case 3:
					alunos[x][y] = alunos[x][1] + alunos[x][2];
					mediat = mediat + alunos[x][y];
					break;
			}
		}
	}
	
	for (x = 0; x < 5; x++) {
		if (alunos[x][3] > maiorN) {
			maiorN = alunos[x][3];
			matric = alunos[x][0];
		}
	}

	mediat = mediat / x;
	
	printf("O aluno de matricula %i teve a maior nota final que foi %i.\n", matric, maiorN);
	printf("A media de nota da sala foi %.2f.\n", mediat);
}

