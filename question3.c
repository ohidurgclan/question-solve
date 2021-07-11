#include <stdio.h>

int main()
{
    int base, exponent;
    double power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(int i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("Power of Number %.1lf",power);

    return 0;
}
