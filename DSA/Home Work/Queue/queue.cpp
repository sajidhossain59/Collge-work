#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int *arr;
    int capacity;
    int size;
};

Queue *createQueue(int cap){
    Queue *q = new Queue;
    q->arr = new int[cap];
    q->size = 0;
    q->capacity = cap;
    
    return q;
}

void enqueue(int n, Queue *q){
    if(q->size == q->capacity){
        cout << "Queue Overflow";
        return;
    }
    else{
        q->arr[q->size] = n;
        q->size++;
    }
}

void dequeue(Queue *q){
    if(q->size == 0){
        cout << "Queue Underflow";
        return;
    }
    else{
        for(int i=0;i<q->size-1;i++){
            q->arr[i] = q->arr[i+1];
        }
        q->size--;
    }
}

void show(Queue *q){
    if(q->size == 0){
        cout << "Queue Empty";
        return;
    }
    for(int i=0;i<q->size;i++){
        cout << q->arr[i]<< " ";
    }
}


int main(){
    Queue *q = createQueue(5);
    enqueue(5,q);
    enqueue(6,q);
    enqueue(7,q);
    enqueue(8,q);
    enqueue(9,q);
    dequeue(q);
    enqueue(10,q);
    show(q);

}