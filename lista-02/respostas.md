# RESPOSTAS 
## Ex01
```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```
---------------------------------------------

## Ex02
```c
#include <stdio.h>

int main(void) {
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    
    if (x > y) {
        printf("%.2lf\n", x);
    } else if (x < y) {
        printf("%.2lf\n", y);
    } else {
        printf("The numbers are equal\n");
    }

    return 0;
}
```
---------------------------------------------

## Ex03
```c
#include <stdio.h>

int main() {
    float value;
    printf("Value: ");
    scanf("%f", &value);

    if (value*3.17 <= 1000)
    {
        printf("Bom negocio\n");
    }

    return 0;
}
```
---------------------------------------------

## Ex04
```c
#include <stdio.h>

int main() {
    double vel;
    printf("Velocidade em milhas: ");
    scanf("%lf", &vel);

    double km = vel*1.6;

    if (km < 80)
    {
        printf("Acelera\n");
    }
    else if (km > 100)
    {
        printf("Desacelere\n");
    }
    else
    {
        printf("Mantenha\n");
    }

    return 0;
}
```
---------------------------------------------

## Ex05
```c
#include <stdio.h>

int main(void)
{
    double soma = 0, n = -1;
    while (n != 0)
    {
        printf("N: ");
        scanf("%lf", &n);
        soma += n;
    }

    printf("Soma: %.2lf\n", soma);
    return 0;
}
```
---------------------------------------------

## Ex06
```c
#include <stdio.h>

int main(void)
{
    long long n, soma = 0;
    printf("N: ");
    scanf("%lld", &n);

    for (int i = 1; i < n+1; i++)
    {
        soma += i*i;
    }

    printf("%lld\n", soma);

    return 0;
}
```
---------------------------------------------

## Ex07
```c
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
```
---------------------------------------------

## Ex08 em C
```c
#include <stdio.h>

int main(void)
{
    long long n1, n2;
    printf("Entre com n1 n2: ");
    scanf("%lld %lld", &n1, &n2);

    if (n1 < n2)
        for (long long i = n1+1; i < n2; i++)
            printf("%lld ", i);
    else
        for (long long i = n2+1; i < n1; i++)
            printf("%lld ", i);
    printf("\n");
}
```
---------------------------------------------

## Ex08 em Python
```python
n1 = int(input("Entre com n1: "))
n2 = int(input("Entre com n2: "))

if (n1 < n2):
    for i in range(n1+1, n2):
        print(i, " ", end="")
else:
    for i in range(n2+1, n1):
        print(i, " ", end="")
print("")
```
