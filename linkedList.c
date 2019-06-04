#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* BuidOneTwoThree() {
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    // We need to use malloc to allocate memory in the heap.
    // ... then free it later using, well, `freeze()`
    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    return head;

};


int main(void)
{
    printf("%d \n",BuidOneTwoThree() -> next -> data);
}


