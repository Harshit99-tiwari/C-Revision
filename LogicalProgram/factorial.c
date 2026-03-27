#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial = %lld\n", fact);

    return 0;
}