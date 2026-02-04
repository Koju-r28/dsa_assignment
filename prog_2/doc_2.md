# Documentation
## Introduction
A stack is used to temporarily store operators and parentheses while converting an infix expression into postfix form.

## Functions Discription

push() – It pushes operator into stack.

pop() – It removes operator from stack.

priority() – It returns operator precedence.

## Algorithm

    1. Scan infix expression from left to right

    2. If operand, print directly

    3. If operator, pop higher precedence operators and push current operator

    4. Pop all remaining operators at the end

## main() Overview
It reads infix expression, converts it to postfix using stack, and prints output.

## Output 
    Input: a+bc
    Output: abc+
