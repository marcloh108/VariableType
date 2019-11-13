#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerator, denominator, quotient, remainder;

    printf("Input numerator: ");
    scanf("%d", &numerator);

    printf("Input denominator: ");
    scanf("%d", &denominator);

    quotient = numerator / denominator;

    remainder = numerator % denominator;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
