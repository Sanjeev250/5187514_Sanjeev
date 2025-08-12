#include <stdio.h>
#include "demo.h"

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", sum(num1, num2));
    printf("Difference: %d\n", diff(num1, num2));
    printf("Division: %d\n", div(num1, num2));
    printf("Product: %d\n", product(num1, num2));

    return 0;
}
