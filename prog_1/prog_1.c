#include <stdio.h>
#define MAX 100

char stack[MAX];
int top;

void initStack() {
    top = -1;
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '[' && close == ']') return 1;
    if (open == '{' && close == '}') return 1;
    return 0;
}

int isBalanced(char exp[]) {
    initStack();
    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (top == -1) return 0;
            if (!isMatching(pop(), exp[i])) return 0;
        }
    }
    return top == -1;
}

int main() {
    char exp1[] = "a + (b - c) * (d";
    char exp2[] = "m + [a - b * (c + d * {m)]";
    char exp3[] = "a + (b - c)";

    printf("%s -> %s\n", exp1, isBalanced(exp1) ? "Balanced" : "Not Balanced");
    printf("%s -> %s\n", exp2, isBalanced(exp2) ? "Balanced" : "Not Balanced");
    printf("%s -> %s\n", exp3, isBalanced(exp3) ? "Balanced" : "Not Balanced");

    return 0;
}