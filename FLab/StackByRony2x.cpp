#include<iostream>
using namespace std;
#define Ssize 10

typedef struct{
    int top;
    int data[Ssize];
} Stack;

int pop(Stack *s){
    int item;
    if(s->top == 0){
        cout <<"Stack is empty"<<endl;
        return -1;
    }else{
        s->top = s->top -1;
        item = s-> data[s->top];

        return item;
    }
}

void push(Stack *s, int item){
    if(s->top < Ssize){
        s->data[s->top] = item;
        s->top = s->top +1;
    }else{
        cout <<"Stack is full"<<endl;
    }
}

int main(){


    cout <<"This is stack"<<endl;

    Stack myS;
    int item;

    myS.top = 0;
    push(&myS, 11);

    item = pop(&myS);
    cout << item <<endl;

    item = pop(&myS);
    cout << item <<endl;

    return 0;
}
