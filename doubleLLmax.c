#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
}*head;

void scanDLL(int n) {
    int element;
    struct node *temp, *newNode;
    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter element 1: ");
    scanf("%d", &element);

    head->data=element;
    head->right=NULL;
    head->left=NULL;
    temp=head;

    for(int i=2; i<=n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter element %d: ", i);
        scanf("%d", &element);

        newNode->data=element;
        newNode->right=NULL;
        newNode->left=temp;

        temp->right=newNode;
        temp=temp->right;
    } 
}

void printDLL() {
    struct node *temp;
    temp=head;

    printf("\nThe linked list is: ");
    while(temp!=NULL) {
        printf("\t%d", temp->data);
        temp=temp->right;
    }
}

void maxDLL() {
    int max, index=0;
    struct node *temp;
    temp=head;

    while(temp->right!=NULL) {
        if(temp->data<temp->right->data) {
            max=temp->right->data;
        } else {
            max=temp->data;
        }
        temp=temp->right;
        index++;
    }
    printf("\n\nThe largest element is %d at index %d", max, index);
}

int main() {
    int n;
    printf("\nEnter length of linked list: ");
    scanf("%d", &n);
    
    scanDLL(n); // scans user input into linked list

    printDLL(); // prints user inputted linked list

    maxDLL(); // searches the linked list for element

    return 0;
}