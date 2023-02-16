#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

void displayStack() {
    struct node *temp;
    temp=head;

    while(temp!=NULL) {
        printf("\t%d", temp->data);
        temp=temp->next;
    }
}

void push(int element) {
    int n;
    struct node *temp, *newNode;
    
    if(head==NULL) {
        head = (struct node *)malloc(sizeof(struct node));
        head->data=element;
        head->next=NULL;
        temp=head;
    } else {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data=element;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;
    }
    
}

void pop() {
    int n;
    struct node *temp;
    struct node *previous;
    head = (struct node *)malloc(sizeof(struct node));

    temp=head;

    while(temp->next!=NULL) {
        if(temp->next==NULL) {
            previous->next=temp;
            previous->next=NULL;
            free(temp);
        }
        temp=temp->next;
    }
    displayStack();
}

void sum() {
    int n, sum=0;
    struct node *temp;
    head = (struct node *)malloc(sizeof(struct node));
    
    temp=head;

    while(temp!=NULL) {
        sum=sum+temp->data;
        temp=temp->next;
    }
}

int main() {
    int n, element, option=0;
    while(option!=4){
        printf("\nPress 1 for PUSH:");
        printf("\nPress 2 for POP:");
        printf("\nPress 3 for SUM:");
        printf("\nPress 4 for EXIT:\n");
        scanf("%d", &option);
        switch(option) {
            case 1: 
                printf("\nEnter element to PUSH: ");
                scanf("%d", element);
                push(element);
                break;
            case 2: 
                pop();
                break;
            case 3: 
                sum();
                break;
            case 4: 
                break;
            case 5:
                displayStack();
                break;
            default:
                printf("\n!!! INVALID OPERATION !!!\n");
                break;   
        }
    }
   
}

