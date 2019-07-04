#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int nodeRef;
    struct Head {
        struct Node* next;
    };
    struct Node {
        int value;
        struct Node* next;
    };

    // Create pointers
    struct Head* head;
    struct Node* firstNode;
    struct Node* secondNode;
    struct Node* thirdNode;
    int* x;
    int* y;
    int* z;
    
    // Designate node pointees
    head = malloc(sizeof(struct Node));
    firstNode = malloc(sizeof(struct Node));
    secondNode = malloc(sizeof(struct Node));
    thirdNode = malloc(sizeof(struct Node));

    // Designate int pointees
    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
    z = malloc(sizeof(int));

    *x = 1;
    *y = 2;
    *z = 3;

    head -> next = firstNode;

    firstNode -> value = *x;
    firstNode -> next = secondNode;

    secondNode -> value = *y;
    secondNode -> next = thirdNode;

    thirdNode -> value = *z;
    thirdNode -> next = firstNode;


    nodeRef = head -> next -> next -> next -> value;

    printf("%d \n", nodeRef);

    

};