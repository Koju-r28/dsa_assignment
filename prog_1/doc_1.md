# Documentation of prog_1(Balanced Parentheses Checker )
## Introduction
A stack is a data structure that follows the Last In First Out principle. In this program, we have used a character array to represent the stack, where the size of the array is defined by the constant MAX, which represents the maximum size of the stack. An integer variable, top, is used to store the top element of the stack. It is initialized to -1, indicating that the stack is initially empty.
The opening parentheses, ((, {, and [, which we encounter during the scanning of the expression, are temporarily stored in the stack. When we encounter a closing parenthesis, we pop the opening parenthesis from the stack and check for its correctness.

## Datastructure Used
stack

## Function Descriptions
### void push(char c)
It adds adds an opening parenthesis to the stack by incrementing top and setting stack[top] = char. This function is called when (, {, or [ is seen.
### char pop()
char pop() pops an element from the stack by returning stack[top] and then decrementing top. This function is called when a closing parenthesis is seen.
### int isMatching(char open, char close)
This function checks if the popped opening parenthesis and the current closing parenthesis are a pair. It returns 1 if they are a pair ((), {}, []), otherwise 0.
### int isBalanced(char exp[])
This function iterates through the expression one by one. It uses the stack for the iteration. When an opening parenthesis is seen, it is pushed onto the stack. When a closing parenthesis is seen, it checks for matching by calling isMatching().

## Algorithm 

1.Initialize an empty stack.

2.Traverse the expression from left to right.

3.If an opening parenthesis is found, push it onto the stack.

4.If a closing parenthesis is found:

    .If the stack is empty, the expression is unbalanced.

    .Otherwise, pop the top element and check for matching.

5.After complete traversal, check the stack:

     .If empty → balanced expression.

     .If not empty → unbalanced expression



## main() Function Overview
The main() function prompts the user to enter a mathematical expression, then calls isBalanced() to validate the parentheses. Based on the return value, it displays whether the expression is balanced or unbalanced.

### Output
```bash
a + (b - c) * (d -> Not Balanced
m + [a - b * (c + d * {m)] -> Not Balanced
a + (b - c) -> Balanced
```
