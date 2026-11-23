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