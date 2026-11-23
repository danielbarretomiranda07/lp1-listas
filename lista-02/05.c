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