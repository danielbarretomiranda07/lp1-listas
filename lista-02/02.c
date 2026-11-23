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