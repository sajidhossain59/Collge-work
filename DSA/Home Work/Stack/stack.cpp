#include <bits/stdc++.h>
using namespace std;

struct Stack {
    int top;
    int size;
    int *arr;
};

Stack *createStack(int n){
    Stack *stack = new Stack;
    stack->top = -1;
    stack->size = n;
    stack->arr = new int[n];
    return stack;
}

void push(Stack*stack, int n){
    if(stack->top == stack->size-1){
        printf("overflow");
    }
    else{
        stack->arr[++stack->top] = n;
    }
}

int pop(Stack*stack){
    if(stack->top == -1){
        printf("UnderFlow");
        return -1;
        
    }
    else{
        return stack->arr[stack->top--];
    }
}

bool isEmpty(Stack*stack){
    return stack->top == -1;
}

bool isFull(Stack*stack){
    return stack->top == stack->size-1;
}

int peak(Stack * stack){
    if(isEmpty(stack)){
        printf("Stack Empty");
        return -1;
    }
    else{
        return stack->arr[stack->top];
    }
}

int main() {
    Stack *st = createStack(5);
    cout << isEmpty(st) << endl;
    push(st,10);
    cout << isEmpty(st) << endl;
    push(st,7);
    push(st,5);
    cout << st->arr[st->top]<<endl;
    pop(st);
    cout << st->arr[st->top];

}