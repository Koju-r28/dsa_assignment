#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void reversePrint(struct node* head) {
    if (head == NULL) return;
    reversePrint(head->next);
    printf("%d ", head->data);
}

int main(void) {
    struct node *head = NULL, *n1, *n2, *n3;
    n1 = malloc(sizeof(struct node));
    n2 = malloc(sizeof(struct node));
    n3 = malloc(sizeof(struct node));

    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;
    head = n1;

    printf("Reverse Traversal: ");
    reversePrint(head);
    return 0;
}