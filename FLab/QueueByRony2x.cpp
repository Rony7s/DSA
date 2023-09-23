#include<iostream>
using namespace std;

#define Qsize 4

typedef struct {
    int data [Qsize];
    int head, tail;
} Queue;

void enqueue(Queue *q, int item){
    if((q->tail+1)%(Qsize+1) == q->head){
        cout <<"Queue is full"<<endl;
        return;
    }

    q->data[q->tail] = item;
    q->tail = (q->tail+1)%(Qsize+1);
}

int dequeue(Queue *q){
    if(q->tail == q->head){
        cout <<"Queue is empty"<<endl;
        return -1;
    }
    int item = q->data[q->head];
    q->head = (q->head +1)% (Qsize+1);
    return item;
}

void show(Queue *q){
    for(int i = q->head; i< q->tail; i++){
        cout <<" "<<q->data[i]<<" ";
    }
    cout<<endl;
}

int main(){

    cout <<"This is Queue"<<endl;
    Queue myQ;
    int item;
    myQ.head = 0;
    myQ.tail = 0;

    enqueue (&myQ, 10);
    cout <<"tail = "<< myQ.tail <<endl;

    enqueue (&myQ, 3);
    cout <<"tail = "<< myQ.tail <<endl;

    enqueue (&myQ, 5);
    cout <<"tail = "<< myQ.tail <<endl;

    enqueue (&myQ, 99);

    cout <<"starting head = "<<myQ.head<<endl;

    show (&myQ);

    item  = dequeue (&myQ);
    cout <<"item = "<< item <<" head = "<<myQ.head<<endl;

    item  = dequeue (&myQ);
    cout <<"item = "<< item <<" head = "<<myQ.head<<endl;

    show (&myQ);

    enqueue (&myQ, 7);
    cout <<"tail = "<< myQ.tail <<endl;

    enqueue (&myQ, 9);
    cout <<"tail = "<< myQ.tail <<endl;

    show (&myQ);

    return 0;
}
