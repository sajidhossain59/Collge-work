#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int *arr;
    int capacity;
    int front; 
    int rear;   
    int size;
};

Queue *createQueue(int cap){
    Queue *q = new Queue;
    q->arr = new int[cap];
    q->size = 0;
    q->capacity = cap;
    q->front = 0;
    q->rear = -1;
    
    return q;
}

void enqueue(int n, Queue *q){
    if(q->size == q->capacity){
        cout << "Queue Overflow\n";
        return;
    }
    else{
        q->rear = (q->rear + 1) % q->capacity;  // Circular increment
        q->arr[q->rear] = n;
        q->size++;
    }
}

void dequeue(Queue *q){
    if(q->size == 0){
        cout << "Queue Underflow\n";
        return;
    }
    else{
        q->front = (q->front + 1) % q->capacity;  // Circular increment
        q->size--;
    }
}

void show(Queue *q){
    if(q->size == 0) {
        cout << "Queue is empty\n";
        return;
    }
    int count = 0;
    int index = q->front;
    while(count < q->size){
        cout << q->arr[index] << " ";
        index = (index + 1) % q->capacity;
        count++;
    }
    cout << endl;
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
    
    
    delete[] q->arr;
    delete q;
}
