#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void scanLL(int n) {
    int element;
    struct node *temp,*newNode;
    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter element 1: ");
    scanf("%d", &element);

    head->data=element;
    head->next=NULL;
    temp=head;

    for(int i=2; i<=n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d: ", i);
        scanf("%d", &element);

        newNode->data=element;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }
}

void printLL() {
    struct node *temp;
    temp=head;

    printf("\nThe linked list is: ");
    while(temp!=NULL) {
        printf("\t%d", temp->data);
        temp=temp->next;
    }
}

int main() {
    int n;
    printf("\nEnter length of linked list: ");
    scanf("%d", &n);
    
    scanLL(n); // scans user input into linked list

    printLL(); // prints user inputted linked list

    return 0;
}