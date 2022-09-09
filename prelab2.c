#include <stdio.h>

int main (void)
{
    //grab intergers
    int A = 0, B = 0, C = 0, D = 0;

    //capture values
    printf("[*] Input four intergers: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    //prints values
    printf("%d %d %d %d\n", A, B, C, D);

    //Sum of B and C
    printf("Sum of B and C: %d\n", B + C);

    //Product of A and D
    printf("Sum of B and C: %d\n", A * D);

    //Divide of A and C
    printf("Divide A and C: %d\n", A / C);

    //Remainder of C and D
    printf("Remainder of C and D: %d\n", C % D);

    //The product of A and C divided by the quantity sum of B and D 
    printf("A * C / B + D: %d\n", (A * C) / (B + D));

    return 0;
}