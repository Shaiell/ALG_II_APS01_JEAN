#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

//############################################EXERCICIO 01 ##################################################

/* 1)	Faça um programa que receba três notas de um aluno, calcule e imprima a média aritmética dessas notas. */

/*int main()
{
	float nota[3], media = 0;
	int cont;
	char nome[50];

	setlocale(LC_ALL, "Portuguese");

	printf("Informe o Nome do Aluno:");
	fgets(nome,50,stdin);
	nome[strlen(nome) - 1] = '\0';

	for (cont = 0; cont < 3; cont++) {
		printf("informe a %i º nota:", cont+1);
		scanf_s("%f", &nota[cont]);
		media = (float)media + nota[cont];
	}

	media = media / cont;

	printf("\n\nO aluno %s teve a media de %.2f.\n\n", nome, media);


}*/



//############################################EXERCICIO 02 ##################################################

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

/*int main()
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
		printf("%s, infelizmente não tens a idade necessaria para se candidatar a vaga.\n\n", nome);
	}


}*/


//############################################EXERCICIO 03 ##################################################


/*3)	Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo,
a mais gordo e o mais magro, para isto você deve fazer um programa que pergunte a cada um dos clientes
da academia seu código, sua altura e seu peso. O final da digitação de dados deve ser dada quando o usuário
digitar 0 (zero) no campo código. Ao encerrar o programa também deve ser informados os códigos e valores
do cliente mais alto, do mais baixo, do mais gordo e do mais magro, além da média das alturas e dos pesos
dos clientes.*/

/*int main()
{
	int codigo = 0;
	int codpesomenor = 0;
	int codpesomaior = 0;
	int codalturamenor = 0;
	int codalturamaior = 0;
	char nome[50];
	char nomepesomaior[50];
	char nomepesomenor[50];
	char nomealturamaior[50];
	char nomealturamenor[50];
	float altura = 0;
	float peso = 0;
	float pesomaior = 0;
	float pesomenor = 999;
	float alturamaior = 0;
	float alturamenor = 999;
	float mediap = 0;
	float mediah = 0;
	int cont = 0;

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
		printf("O aluno %s de codigo %i, tem o menor peso, que é %.2fKg.\n\n", nomepesomenor, codpesomenor, pesomenor);
		printf("O aluno %s de codigo %i, tem o maior peso, que é %.2fKg.\n\n", nomepesomaior, codpesomaior, pesomaior);
		printf("O aluno %s de codigo %i, é o mais baixo com %.2fM de altura.\n\n", nomealturamenor, codalturamenor, alturamenor);
		printf("O aluno %s de codigo %i, é o mais alto com %.2fM de altura.\n\n", nomealturamaior, codalturamaior, alturamaior);
		printf("A media  de peso da academia é: %.2fKG\n\n", mediap);
		printf("A media  de altura da academia é: %.2fM\n\n", mediah);
	}
	else
	{
		printf("Não tem alunos cadastrados\n\n");
	}
}*/


//############################################EXERCICIO 04 ##################################################


/*4)	Escreva um algoritmo que leia um conjunto de 50 fichas, cada uma contendo a altura e o sexo de uma pessoa
		(1 = masculino e 2 = feminino), e calcule e imprima:
•	A maior e a menor altura da turma;
•	A média de altura das mulheres;
•	A média de altura da turma.

*/

/*int main() 
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

}*/

//############################################EXERCICIO 05 ##################################################

/*5)	Escreva um algoritmo que leia o código e o salário de 20 funcionários de uma empresa. 
Ao final, o algoritmo deve determinar o total da folha de pagamento da empresa e sua média salarial.*/

/*int main()
{
	char nome[50];
	float salario = 0, media = 0, total = 0;
	int cont = 0;

	setlocale(LC_ALL, "Portuguese");

	for (cont = 0; cont < 20; cont++) {
		printf("informe o nome do %iº funcionario: ", cont + 1);
		gets_s(nome);
		printf("Informe o salario do funcionario %s: ", nome);
		scanf_s("%f", &salario);
		media = media + salario;
		getchar();
	}
	total = media;
	media = media / cont;

	printf("A empresa tem %i funcionarios, o total da folha de pagamento é R$%.2f e a media salaria é R$%.2f.\n\n", cont, total, media);

}*/


//############################################EXERCICIO 06 ##################################################

/*6)	Faça um algoritmo que leia o nome, a idade e o sexo (‘M’ para masculino e ‘F’ para feminino)
		de um grupo de 200 estudantes e determine?

•	quantos são do sexo feminino e maior de 21 anos;
•	quantos são do sexo masculino e maior de 18 anos;
*/

/*struct alunos {
	char nome[50];
	int idade;
	char sexo;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	struct alunos a[200];
	int cont = 0, maiorF = 0, maiorM = 0;

	for (cont = 0; cont < 200; cont++) {
		printf("informe o nome do %iº aluno: ", cont+1);
		gets_s(a[cont].nome);
		printf("informe a idade :");
		scanf_s("%i", &a[cont].idade);
		printf("informe o sexo, F para feminino e M para Masculino: ");
		scanf_s("\n%c", &a[cont].sexo);
		getchar();
		system("cls");
	}

	for (cont = 0; cont < 200; cont++) {
		if (a[cont].sexo == 'F' || a[cont].sexo == 'f') {
			if (a[cont].idade > 21) {
				maiorF = maiorF + 1;
			}
		}
		else 
		{
			if (a[cont].idade > 21) {
				maiorM = maiorM + 1;
			}
		}
	}

	printf("O curso tem %i alunos do sexo Femenino e maiores de 21 anos.\n", maiorF);
	printf("O curso tem %i alunos do sexo Masculino e maiores de 21 anos.\n\n", maiorM);

	for (cont = 0; cont < 200; cont++) {
		if (a[cont].sexo == 'F' || a[cont].sexo == 'f') {
			if (a[cont].idade > 21) {
				printf("%s tem %i anos.\n", a[cont].nome, a[cont].idade);
			}
		}
		else
		{
			if (a[cont].idade > 21) {
				printf("%s tem %i anos.\n", a[cont].nome, a[cont].idade);
			}
		}
	}
}*/

//############################################EXERCICIO 07 ##################################################

/*7)	Considerando que a media para aprovação seja 6.00, escreva um algoritmo que leia a média de 15 alunos.
		Após a leitura e armazenamento das médias em um vetor de 15 posições, indique:

a) Qual a maior nota informada.
b) Qual a menor nota informada.
c) Quantos alunos estão aprovados.
d) Quantos alunos estão reprovados.
e) Quantos alunos estão em recuperação.
f) Qual a média da turma.
*/

/*int main()
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
*/

//############################################EXERCICIO 08 ##################################################

/*8)	Faça um programa que carregue uma matriz 12x4 com os valores das vendas de uma loja, onde cada linha representa
		um mês do ano e cada coluna representa uma semana do mês. Calcule e mostre;
		- o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
		- o total vendido em cada semana durante todo o ano;
		- o total vendido pela loja no ano.
*/

/*int main()
{
	float vendas[12][4], tmes[12], tsem[4], tano=0;
	char mes[15][12];
	int x = 0, y = 0;

	setlocale(LC_ALL, "portuguese");
	
	strcpy_s(mes[1], "Janeiro");
	strcpy_s(mes[2], "Fevereiro");
	strcpy_s(mes[3], "Março");
	strcpy_s(mes[4], "Abril");
	strcpy_s(mes[5], "Maio");
	strcpy_s(mes[6], "Junho");
	strcpy_s(mes[7], "Julho");
	strcpy_s(mes[8], "Agosto");
	strcpy_s(mes[9], "Setembro");
	strcpy_s(mes[10], "Outubro");
	strcpy_s(mes[11], "Novembro");
	strcpy_s(mes[12], "Dezembro");
	
	for (x = 0; x < 12; x++) {
		for (y = 0; y < 4; y++) {
			printf("informe a venda da %iª semana do mes de %s: ",y+1,mes[x+1]);
			scanf_s("%f", &vendas[x][y]);
		}
	}

	for (x = 0; x < 12; x++) {
		tmes[x] = 0;
		for (y = 0; y < 4; y++) {
			tmes[x] = tmes[x] + vendas[x][y];
		}
	}

	for (y = 0; y < 4; y++) {
		tsem[y] = 0;
		for (x = 0; x < 12; x++) {
			tsem[y] = tsem[y] + vendas[x][y]; 
		}
	}

	for (x = 0; x < 12; x++) {
		for (y = 0; y < 4; y++) {
			tano = tano + vendas[x][y];
		}
	}

	for (x = 0; x < 12; x++) {
		printf("O total de vendas no mês de %s foi de R$%.2f.\n", mes[x + 1], tmes[x]);
	}

	for (y = 0; y < 4; y++) {
		printf("O total de vendas das %iªs semanas foi de R$%.2f.\n", y + 1, tsem[y]);
	}
	printf("O total de vendas no ano foi de R$%.2f.\n", tano); 
}*/

//############################################EXERCICIO 09 ##################################################

/*9)	A gerente do cabeleireiro Sempre Bela tem uma tabela em que registra as quantidades de serviços executados nos "pes",
		nas "mãos" e o serviço de podologia das cinco manicures. Sabendo-se que cada uma ganha 50% do que faturou ao mês,
		criar um programa que possa calcular e imprimir quanto cada uma vai receber, uma vez que não têm carteiras assinadas,
		os valores, respectivamente, são: R$10,00, R$15,00 e R$30,00.*/

/*int main()
{
	int nota[5][3];
	int x = 0, y = 0;
	float fat[5][3], pag[5], pagt[5], fatu[5];

	setlocale(LC_ALL,"portuguese");

	printf("                         Salão Sempre Bela\n\n");
	printf("                         Serviços:\n");
	printf("                         Mão: R$10,00\n");
	printf("                         Pé: R$15,00\n");
	printf("                         Podologia: R$30,00\n\n");


	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			if (y == 0) {
				printf("Informe quantos pés a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			if (y == 1) {
				printf("Informe quantas mãos a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			if (y == 2) {
				printf("Informe quantas podologias a %iª manicure fez: ", x + 1);
				scanf_s("%i", &nota[x][y]);
			}
			getchar();
		}
	}

	for (x = 0; x < 5; x++) {
		pag[x] = 0;
		fatu[x] = 0;
		pagt[x] = 0;
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			fat[x][y] = 0;
		}
	}

	for (x = 0; x < 5; x++) {
		for (y = 0; y < 3; y++) {
			if (y == 0) {
				fat[x][y] = nota[x][y] * 10 ;
			}
			if (y == 1) {
				fat[x][y] = nota[x][y] * 15;
			}
			if (y == 2) {
				fat[x][y] = nota[x][y] * 30;
			}
			pag[x] = float(fat[x][y] * 0.50);
			fatu[x] = float(fatu[x] + fat[x][y]);
			pagt[x] = float(pagt[x] + pag[x]);
		}
	}

	for (x = 0; x < 5; x++) {		
		if (x == x) {
			printf("A %iª manicure fez %i mão, %i pés e %i podologias.\n", x + 1, nota[x][0], nota[x][1], nota[x][2]);
			printf("O valor total das mãos feitas pela %iª manicure foi R$%.2f, o pé foi R$%.2f e a podologia foi R$%.2f.\n", x + 1, fat[x][0], fat[x][1], fat[x][2]);
			printf("O faturamento total da %iª manucure foi de R$%.2f, o seu salario foi de R$%.2f.\n\n\n", x + 1, fatu[x], pagt[x]);
		}
	}
}*/


//############################################EXERCICIO 10 ##################################################

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

/*int main()
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

*/

//############################################EXERCICIO 11 ##################################################

/*11)	Definir uma estrutura para representar os dados dos componentes de um computador, armazenando o nome do componente e o preço.
		Implementar uma aplicação que permita cadastrar até 20 componentes em um micro, listar os componentes cadastrados e totalizar o
		custo total do equipamento.
*/

/*struct computador {
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
*/

//############################################EXERCICIO 12 ##################################################

/*12)Um clube que tem 12 associados deseja que você faça um programa para armazenar os dados cadastrais desses associados.
	Os dados são: nome, dia, mês e ano de nascimento, valor da mensalidade e quantidade de dependentes. O programa deverá
	ler os dados e imprimir depois na tela. Deverá também informar o associado (ou os associados) com o maior número de 
	dependentes.*/

/*struct dados {
	char nome[80];
	int dia = 0, mes = 0, ano = 0, depen = 0;
	float mensal = 0;
};

int main()
{
	struct dados d[12];
	int cont = 0, mdep = 0;

	setlocale(LC_ALL, "portuguese");

	for (cont = 0; cont < 3; cont++) {
		printf("informe o nome do %iº associado: ", cont + 1);
		fgets(d[cont].nome, 80, stdin);
		d[cont].nome[strlen(d[cont].nome) - 1] = '\0';
		printf("Informe o dia do seu nascimento: ");
		scanf_s("%i", &d[cont].dia);
		printf("Informe o mes do seu nascimento em numeral: ");
		scanf_s("%i", &d[cont].mes);
		printf("Informe o ano do seu nascimento: ");
		scanf_s("%i", &d[cont].ano);
		printf("Informe o valor da mensalidade: ");
		scanf_s("%f", &d[cont].mensal);
		printf("Informe a quantidade de dependentes: ");
		scanf_s("%i", &d[cont].depen);
		getchar();
	}

	printf("\n");
	for (cont = 0; cont < 12; cont++) {
		printf("O associado %s nasceu em %i/%i/%i paga uma mensalidade de R$%.2f e tem %i dependentes.\n", d[cont].nome, d[cont].dia, d[cont].mes, d[cont].ano, d[cont].mensal, d[cont].depen);
	}

	for (cont = 0; cont < 12; cont++) {
		if (d[cont].depen > mdep) {
			mdep = d[cont].depen;
		}
	}

	printf("\nAbaixo os associados com o maior numero de dependentes: \n");
	for (cont = 0; cont < 12; cont++) {
		if (d[cont].depen == mdep) {
			printf("O associado %s tem %i dependentes.\n", d[cont].nome, d[cont].depen);
		}
	}
}*/

//############################################EXERCICIO 13 ##################################################

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

/*struct apartamento {
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

*/

//############################################EXERCICIO 14 ##################################################

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

/*struct votos {
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


}*/

//############################################EXERCICIO 15 ##################################################

/*15)	Faça um programa para gerar automaticamente números, entre 0 e 99, de uma cartela de bingo.
		Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não
		ter números repetidos dentro das cartelas! Lembre-se que é importante armazenar os números
		sorteados em uma tabela com 5 linhas e 5 colunas,pois no sorteio do bingo vale pontos quem
		completar primeiro uma linha ou uma coluna.O programa deve gerar a cartela e depois exibir na
		tela a cartela gerada, linha a linha,coluna por coluna.*/

/*int main()
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
}*/