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
