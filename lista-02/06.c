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