#include <stdio.h>
int multiply(int arg1, int arg2);
int divide(int arg1, int arg2);
int add(int arg1, int arg2);
int subtract(int arg1, int arg2);
int main() {
    int operation_selected;
    int number_one;
    int number_two;
    int answer;
    printf("Hi, and welcome to my basic calculator app!\n");
    printf("Here are the options:\n");
    printf("1. Multiplication\n");
    printf("2. Division\n");
    printf("3. Addition\n");
    printf("4. Subtraction\n");
    printf("Enter a number for which operation you would like to do on two numbers.\n");
    scanf("%d", &operation_selected);
    if (operation_selected == 1) {
        // multiply
        printf("Now give me first number to multiply:\n");
        scanf("%d", &number_one);
        printf("Now give me second number to multiply:\n");
        scanf("%d", &number_two);
        printf("The answer is:\n");
        answer = multiply(number_one, number_two);
        printf("%d\n", answer);
    } else if (operation_selected == 2) {
        // divide
        printf("Now give me first number to divide:\n");
        scanf("%d", &number_one);
        printf("Now give me second number to divide:\n");
        scanf("%d", &number_two);
        if (number_two == 0) {
            printf("Error: Divison by zero is not allowed.\n");
            return 0;
        }
        printf("The answer is:\n");
        answer = add(number_one, number_two);
        printf("%d\n", answer);
    } else if (operation_selected == 3) {
        // add
        printf("Now give me first number to add:\n");
        scanf("%d", &number_one);
        printf("Now give me second number to add:\n");
        scanf("%d", &number_two);
        printf("The answer is:\n");
        answer = add(number_one, number_two);
        printf("%d\n", answer);
    } else if (operation_selected == 4) {
        // subtract
        printf("Now give me first number to subtract:\n");
        scanf("%d", &number_one);
        printf("Now give me second number to subtract:\n");
        scanf("%d", &number_two);
        printf("The answer is:\n");
        answer = subtract(number_one, number_two);
        printf("%d\n", answer);
    } else {
        printf("Operation not recognized, please try again.\n");
    }
    return 0;
}

int multiply(int arg1, int arg2) {
    return arg1 * arg2;
}
int divide(int arg1, int arg2) {
    return arg1 / arg2;
}
int add(int arg1, int arg2) {
    return arg1 + arg2;
}
int subtract(int arg1, int arg2) {
    return arg1 - arg2;
}