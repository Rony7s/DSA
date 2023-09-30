#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

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

int main(){
    printf("Welcome Linked-list By Rony2x");

    struct node *head = NULL;
    head = (struct node *) malloc( sizeof(struct node));

    head-> data = 45;
    head->link = NULL;

    printf("\n%d\n ", head->data );

    struct node *current = NULL;
    current = (struct node *) malloc( sizeof(struct node));

    current-> data = 99;
    current->link = NULL;
    head->link = current;

    printf("\n%d\n ", current->data );


    current = malloc( sizeof(struct node));

    current-> data = 55;
    current->link = NULL;
    head->link->link = current;

    printf("\n%d\n", head->link->link );

    count_of_nodes(head);
    add_at_end(head, 69);
    print_data(head);


    return 0;
}
