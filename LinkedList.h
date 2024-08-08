#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node{
    int data;
    struct Node *next;
};

void insertAtTheBeggining(struct Node **head, int value);
void insertAtTheEnd(struct Node **next, int value);
void printList(struct Node *head);

#endif
