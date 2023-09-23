#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int front = -1, rear = -1, queue[SIZE];

void enqueue();
void dequeue();
void display();
int isFull();
int isEmpty();

int main() {
    int choice;

    while (1) {
        printf("\nPerform operations on the circular queue:");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!!");
        }
    }
}

void enqueue() {
    int x;

    if (isFull()) {
        printf("\nQueue is full (Overflow)!");
    } else {
        printf("\nEnter the element to be enqueued: ");
        scanf("%d", &x);
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        queue[rear] = x;
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("\nQueue is empty (Underflow)!");
    } else {
        printf("\nDequeued element: %d", queue[front]);
        if (front == rear) {
            front = rear = -1; // Reset the queue when it becomes empty
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("\nQueue is empty!");
    } else {
        printf("\nElements present in the circular queue: \n");
        int i = front;
        do {
            printf("%d\n", queue[i]);
            i = (i + 1) % SIZE;
        } while (i != (rear + 1) % SIZE);
    }
}

int isFull() {
    return (rear + 1) % SIZE == front;
}

int isEmpty() {
    return front == -1;
}
