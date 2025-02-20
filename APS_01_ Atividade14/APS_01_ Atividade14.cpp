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

/*14)	Numa votação destinada a selecionar um entre 10 candidatos, optou-se pela coleta e processamento dos votos por computador. 
Supondo que os candidatos são designados por seu número de candidato, faça um programa que obedeça às seguintes especificações:

•	Os votos são recebidos a partir do teclado, informando o número do candidato que deverá ser um inteiro de cinco dígitos.
•	O número zero é usado para indicar voto em branco.
•	Números inválidos (não associados a nenhum candidato) indicam votos nulos.
•	O programa deverá exibir a classificação obtida na votação indicando o nome e número do candidato e sua votação expressa em valor 
	absoluto de votos e em porcentagem de votos válidos. Também deverá ser informado o total de votantes, o total de votos válidos, 
	o total de votos brancos e o total de votos nulos. 
	O programa deverá indicar se houve um vencedor ou se deverá haver um segundo turno. Para ser vitorioso, o candidato precisa obter
	uma quantia superior a 50% dos votos válidos. Caso seja necessário um segundo turno, mostre quem são os candidatos que deverão concorrer.
*/

struct votos {
	char nome[80];
	int numero = 0, voto = 0;
	float percent = 0;
};

int main()
{
	struct votos v[12];
	int cont = 0,voto = 0,tvoto = 0, trava = 0;
	char denovo, nomep [80],nomes[80];
	float primeiro = 0, segundo = 0;
	

	setlocale(LC_ALL, "portuguese");

	strcpy_s(v[0].nome, "Caipora");
	v[0].numero = 10100;
	strcpy_s(v[1].nome, "Kuca");
	v[1].numero = 10200;
	strcpy_s(v[2].nome, "Saci");
	v[2].numero = 10300;
	strcpy_s(v[3].nome, "Boi-Tatá");
	v[3].numero = 10400;
	strcpy_s(v[4].nome, "Caipora");
	v[4].numero = 10500;
	strcpy_s(v[5].nome, "Mula sem Cabeça");
	v[5].numero = 10600;
	strcpy_s(v[6].nome, "Rabicó");
	v[6].numero = 10700;
	strcpy_s(v[7].nome, "Boto cor de Rosa");
	v[7].numero = 10800;
	strcpy_s(v[8].nome, "Iara");
	v[8].numero = 10900;
	strcpy_s(v[9].nome, "Curupira");
	v[9].numero = 10101;
	strcpy_s(v[10].nome, "VOTO EM BRANCO");
	v[10].numero = 00000;
	strcpy_s(v[11].nome, "VOTO NULO");
	

	printf("ELEIÇÕES PARA LIDER DO FOLCLORE, ESCOLHA ABAIXO O SEU CANDIDATO:\n\n");

	for (cont = 0; cont < 12; cont++) {
		v[cont].voto = 0;
	}

	for (cont = 0; cont < 11; cont++) {
		printf("Candidato %s numero:%i.\n", v[cont].nome, v[cont].numero);
	}

	do {
		printf("\n");
		printf("Informe o numero do seu candidato: ");
		scanf_s("%i", &voto);
		switch (voto) {
			case 10100:
				v[0].voto = v[0].voto + 1;
				break;
			case 10200:
				v[1].voto = v[1].voto + 1;
				break;
			case 10300:
				v[2].voto = v[2].voto + 1;
				break;
			case 10400:
				v[3].voto = v[3].voto + 1;
				break;
			case 10500:
				v[4].voto = v[4].voto + 1;
				break;
			case 10600:
				v[5].voto = v[5].voto + 1;
				break;
			case 10700:
				v[6].voto = v[6].voto + 1;
				break;
			case 10800:
				v[7].voto = v[7].voto + 1;
				break;
			case 10900:
				v[8].voto = v[8].voto + 1;
				break;
			case 10101:
				v[9].voto = v[9].voto + 1;
				break;
			case 00000:
				v[10].voto = v[10].voto + 1;
				break;
		default:
				v[11].voto = v[11].voto + 1;
				break;
		}
		getchar();
		printf("\n\n'S' para Sim ou 'N' para não\n");
		printf("Outro eleitor ira votar ?\n");
		scanf_s("\n%c",&denovo);
		//fgets(denovo, 1, stdin);
		//denovo[strlen(denovo) - 1] = '\0';
		tvoto = tvoto + 1;
	} while (denovo == 'S' || denovo == 's');

	for (cont = 0; cont < 12; cont++) {
		v[cont].percent = (v[cont].voto * 100) / (tvoto - v[11].voto);
	}

	printf("O total de votos foi %i.\n",tvoto);
	printf("O total de votos validos foi %i.\n", tvoto- v[11].voto);
	printf("O total de votos em branco foi %i.\n",v[10].voto);
	printf("O total de votos nulos foi %i.\n\n", v[11].voto);

	for (cont = 0; cont < 11; cont++) {
		printf("%s de numero %i teve %i votos que foi %.2f%% dos votos validos.\n", v[cont].nome, v[cont].numero, v[cont].voto,v[cont].percent);
	}
	
	printf("%s  teve %i votos que foi %.2f%% dos votos\n ", v[cont].nome, v[cont].voto, v[cont].percent);
	
	for (cont = 0; cont < 10; cont++) {
		if (v[cont].percent > primeiro) {
			primeiro = v[cont].percent;
			strcpy_s(nomep, v[cont].nome);
			trava = cont;
		}
	}

	for (cont = 0; cont < 10; cont++) {
		if (v[cont].percent > segundo && trava != cont) {
			segundo = v[cont].percent;
			strcpy_s(nomes, v[cont].nome);
		}
	}
		
	if (primeiro > 50) {
		printf("O ganhador da eleição foi %s, com %.2f%% dos votos", nomep, primeiro);
	}
	else
	{
		printf("A eleição tera segundo turno entre:\n");
		printf("%s que teve %.2f%% dos votos e %s que teve %.2f%% dos votos.", nomep, primeiro, nomes, segundo);
	}

	printf("\n\n");


}
