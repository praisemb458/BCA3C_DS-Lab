#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int val) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = val;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    int val = stack[top];
    top--;
    return val;
}

int findGCD(int a, int b) {
    push(a);
    push(b);

    while (top >= 1) {
        int val2 = pop();
        int val1 = pop();

        if (val2 == 0) {
            return val1;
        }

        int remainder = val1 % val2;

        push(val2);
        push(remainder);
    }

    return pop();
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("\n The GCD of %d and %d is: %d", num1, num2, gcd);

    return 0;

}
