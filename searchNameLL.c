#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[20];
    struct node *next;
}*head;


void scanLL(int n) {
    char element[20];
    struct node *temp,*newNode;
    head = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter Name 1: ");
    scanf("%s", element);

    strcpy(head->data, element);
    head->next=NULL;
    temp=head;

    for(int i=2; i<=n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Name %d: ", i);
        scanf("%s", element);

        strcpy(newNode->data, element);
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
        printf("   %s    ", temp->data);
        temp=temp->next;
    }
}

void searchLL() {
    char element[20], count=0, index=0;
    struct node *temp;
    temp=head;

    printf("\n\nEnter element to be searched:");
    scanf("%s", element);

    while(temp!=NULL) {
        if(strcmp(temp->data, element)==0) {
            printf("\nName '%s' found at index %d", element, index);
            count=1;
        } 
        temp=temp->next;
        index++;
    }
    if(count==0) {
        printf("\nElement not found.");
    }
}

int main() {
    int n;
    printf("\nEnter length of linked list: ");
    scanf("%d", &n);
    
    scanLL(n); // scans user input into linked list

    printLL(); // prints user inputted linked list

    searchLL(); // searches the linked list for element

    return 0;
}