# Documentation of prog_3 (Reverse Traversal of Singly Linked List)
## Introduction
A singly linked list is implemented using a structure containing an integer data field and a pointer to the next node.A singly linked list consists of nodes containing data and a pointer to the next node. Reverse traversal can be achieved using recursion without modifying the list.

## Data Structure Used
     Singly Linked List

## Functions specification
     reversePrint(struct node* head): Recursively traverses the linked list and prints the elements in reverse order without modifying links.


## Algorithm

    1. If node is NULL, return

    2. Call function on next node

    3. Print current node data

## Overview on main() function
The main() function creates a linked list with three nodes and calls reversePrint() to demonstrate reverse traversal.

## Output
    Reverse Traversal: 30 20 10
