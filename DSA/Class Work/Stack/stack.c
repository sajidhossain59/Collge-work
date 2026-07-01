#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    int top;
    int size;
    int *arr;
}Stack;

Stack *createStack(int n){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = -1;
    stack->size = n;
    stack->arr = (int *)malloc(n*sizeof(int));
    return stack;
}

void push(Stack*stack, int val){
    if(stack->top == stack->size-1){
        printf("overflow");
    }
    else{
        stack->arr[++stack->top] = val;
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



int main(){
    Stack *s1 = createStack(5);
    push(s1,10);
    push(s1,5);
    printf("\n%d",peak(s1));
    pop(s1);
    printf("\n%d\n",peak(s1));
    
    printf("Is stack empty? %s\n", isEmpty(s1) ? "Yes" : "No");
    push(s1,10);
    push(s1,10);
    push(s1,10);
    push(s1,10);
    printf("Is stack empty? %s\n", isFull(s1) ? "Yes" : "No");

    
    free(s1->arr);
    free(s1);

    
}