#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
}*front;

void enqueue(int size) {
    int element;
    struct node *front, *rear, *top;
    top = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter element to be enqueued: ");
    scanf("%d", &element);

    top->data=element;
    top->next=NULL;

    if(front==NULL) {
        front=top;
        rear=top;
        front->next=NULL;
        rear->next=NULL;
    } else {
        for(int i=0; i<size-1; i++) {
        printf("Enter element to be enqueued: ");
        scanf("%d", &element);
        struct node *top;
        top = malloc(sizeof(struct node));

        rear->next=top;
        rear=top;
        rear=rear->next;
        }
    } 

    
}

void displayQ() {
    struct node *temp;
    temp=front;

    if(front==NULL) {
        printf("\nThe queue is empty!");
        exit(0);
    } else {
        printf("\nThe queue is: ");
        while(temp->next!=NULL) {
            printf("%d", temp->data);
            temp=temp->next;
        }
    }
}

int main() {
    int size;
    printf("\nEnter the length of queue: ");
    scanf("%d", &size);

    enqueue(size); // scans user input into queue

    displayQ(); // prints user inputted queue

    //dequeue(); // deletes first element from queue
} 