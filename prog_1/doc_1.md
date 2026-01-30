(a)Introduction

A stack is made using a character array of a fixed size. The variable top is responsible for the index of the topmost element of the stack. The stack serves to hold opening parentheses temporarily during the expression scanning.

(b)Functions Specification

1.push(char c): It adds an opening parenthesis to the stack.

2.pop(): pop() deletes and gives back the topmost element of the stack.

3.isMatching(char open, char close): this function verifies if the open and closed parentheses match.

4.isBalanced(char exp[]): Scans through the expression and checks if all the parentheses are balanced.

(c) Overview on main() function

The main() function receives a mathematical expression from the user and invokes isBalanced() to determine if the parentheses are balanced. It then prints a message based on the result.

(d) Output

1.Input:a + (b − c) ∗ (d
Output: Unbalanced Expression

2.Input:m + [a − b ∗ (c + d ∗ {m)]
Output: Unbalanced Expression

2.Input: a + (b - c)
Output: Balanced Expression
