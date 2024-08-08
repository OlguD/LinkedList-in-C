#include "LinkedList.h"
#include <stdlib.h>
#include <stdio.h>

void insertAtTheBeggining(struct Node **head, int value){

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTheEnd(struct Node **head, int value){

    struct Node *newNode = malloc(sizeof(struct Node)); 
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL){
        *head = NULL;
    } else {
        struct Node *lastNode = *head;


        //last node's next address will be NULL.
        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        //add the newNode at the end of the linked list
        lastNode->next = newNode;
    }

}

void printList(struct Node *head){

    struct Node *temp = head;

    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

}


int main(){
    struct Node *head = NULL;

    insertAtTheBeggining(&head, 10);
    insertAtTheBeggining(&head, 5);
    insertAtTheBeggining(&head, 0);
    insertAtTheEnd(&head, 50);
    printList(head);

    return 0;
}
