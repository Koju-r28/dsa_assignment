# Documentation of prog_4 (Doubly Linked List (Insert & Delete))
## Introduction
A doubly linked list node contains three fields: data, pointer to previous node, and pointer to next node.A doubly linked list allows traversal in both directions using previous and next pointers.
## Data Structure Used
A doubly linked list is a linear data structure consisting of nodes, where each node contains data and two pointers: one pointing to the next node and another to the previous node

## Functions Specification
    1.insertAfter(struct node* prevNode, int value): Inserts a new node after the given node.
    2.deleteNode(): (Conceptually) removes a node by updating previous and next pointers.
    
## Algorithm

    1. Allocate memory for new node

    2. Adjust previous and next pointers

    3. Update list links
## Overview on main() function 
The main() function initializes a doubly linked list and demonstrates insertion of a node after the head node.

## Output
    Inserted node after head
