/**********************************************
* CMP_SC 1050
* FS 2022
* Lab 2
* By Bryson Allen (bma9zq)
* Sept 2, 2022
***********************************************/

#include <stdio.h>

int main (void)
{
    int x = 0;
    int y = 0;

    printf("[*] Enter two numbers: ");
    scanf("%d %d", &x, &y);

    //print values
    printf("X: %d Y: %d\n", x, y);

    //Multiply
    printf("X * Y: %d\n", x * y);

    //Divide
    printf("X / Y: %d\n", x / y);

    //Add 1 to X then multiply it by Y
    printf("(X + 1) * Y: %d\n", (x + 1) * y);

    //print values
    printf("X: %d Y: %d\n", x, y);

}