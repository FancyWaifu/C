#include <stdio.h>

int main(void)
{
    for (int x = 1; x <= 50; x++)
    {
        if (x % 3 == 0 && x % 5 == 0)
        {
            printf("Fizz Buzz, ");
        }
        if (x % 3 == 0 && x % 5 != 0)
        {
            printf("fuzz, ");
        }
        if (x % 5 == 0 && x % 3 != 0) 
        {
            printf("Buzz, ");
        }
        if (x % 3 != 0 && x % 5 != 0)
        {
            printf("%d, ", x);
        }
    }
    printf("\n");
}