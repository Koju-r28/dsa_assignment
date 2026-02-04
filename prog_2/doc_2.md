# Documentation on prog_2 (Infix to Postfix Conversion & Evaluation)
## Introduction
A stack is used to temporarily store operators and parentheses while converting an infix expression into postfix form.Conversion is required because postfix expressions can be evaluated easily using stacks without operator precedence rules.

## Data Structure Used
Stack (Array Implementation) :A Stack is a linear data structure that follows a particular order in which the operations are performed.The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.


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
