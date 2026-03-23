#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Substraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);

    printf("a>b: %d\n", a > b);
    printf("a==b: %d\n", a == b);

    printf("a>0 && b>0: %d\n", a > 0 && b > 0);
    return 0;
}