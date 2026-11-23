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