#include <stdio.h>

typedef struct
{
	char nome[21];
	int v, e, d, pontos;
} time;

int main(void)
{
	const int QTD = 2;
	time times[QTD];


	for (int i = 0; i < QTD; i++)
	{
		printf("Nome (sem espaços) do time %d: ", i+1);
		scanf("%19s", times[i].nome);

		printf("Número de vitórias empates e derrotas: ");
		scanf("%d %d %d", &times[i].v, &times[i].e, &times[i].d);
		times[i].pontos = (times[i].v * 3) + times[i].e;
	}

	time menorMaior[2] = {times[0], times[0]};

	for (int i = 0; i < QTD; i++)
	{
		if (times[i].pontos < menorMaior[0].pontos) menorMaior[0] = times[i];
		else if (times[i].pontos > menorMaior[1].pontos) menorMaior[1] = times[i];
	}

	printf("Time com mais pontos: %19s\n", menorMaior[1].nome);
	printf("Time com menos pontos: %19s\n", menorMaior[0].nome);
}
