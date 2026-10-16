//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2;

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%.1f\n", sum, diff, product, quotient);

    return 0;
}