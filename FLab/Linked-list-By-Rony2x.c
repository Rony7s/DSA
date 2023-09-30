#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head);

void print_data(struct node *head);

void add_at_end(struct node *head, int data);

int main(){
    printf("Welcome Linked-list By Rony2x");

    struct node *head = NULL;
 /*   head = (struct node *) malloc( sizeof(struct node));
    head->link = NULL;

    head-> data = 35;
    head->link = NULL;

    printf("\n%d\n ", head->data );


    add_at_end(head, 69);
    count_of_nodes(head);
    print_data(head);
*/
    int choice;
    while (1) {
        printf("\nPerform operations on the Linked-list: ");
        printf("\n1. Add item\n2. Display\n3. Count item\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter your data: ");
                int x;
                scanf(" %d", &x);
                add_at_end(head, x);
                break;
            case 2:
                print_data(head);
                break;
            case 3:
                count_of_nodes(head);
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!!");
        }
    }

    return 0;
}

void count_of_nodes(struct node *head){
    int count = 0;
    if(head == NULL){
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);

}

void print_data(struct node *head){
    if(head == NULL){
        printf("Linked List is empty\n");
    }
    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL){
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*) malloc (sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link !=NULL){
        ptr = ptr->link;
        ptr = ptr->link;
    }
    ptr->link = temp;

}
