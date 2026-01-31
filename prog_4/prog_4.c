#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

void insertAfter(struct node* prevNode, int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
    newNode->prev = prevNode;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->prev = head->next = NULL;

    insertAfter(head, 20);
    printf("Inserted node after head\n");
    return 0;
}