#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        exit(1);
    }
    return a / b;
}

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter an expression (e.g., 2 + 3): ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
            exit(1);
    }

    printf("Result: %d\n",result);
    return 0;
}
