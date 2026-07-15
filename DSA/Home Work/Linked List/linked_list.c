#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int value;
    struct Node *next;
}Node;

typedef struct{
    Node *head;
    Node *tail;
    int size;
}LinkedList;

Node *createNode(int input){
    Node *nd = (Node*)malloc(sizeof(Node));
    nd->value = input;
    nd->next = NULL;
    return nd;
}

LinkedList *createLinkedList(){
    LinkedList *ls = (LinkedList *)malloc(sizeof(LinkedList));
    ls->head = NULL;
    ls->tail = NULL;
    ls->size = 0;
    return ls;
}

void insert(int value, int position, LinkedList *ls){
    Node *newNode = createNode(value);
    if(position == 0){
        newNode->next = ls->head;
        ls->head = newNode;
        if(ls->size == 0){
            ls->tail = newNode;
        }
    }  
    else if(position == ls->size){
        ls->tail->next = newNode;
        ls->tail = newNode;
    }
    else{
        Node *tmp = ls->head;
        for(int i=0;i<position-1;i++){
            tmp=tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    ls->size++;
}



void delete(LinkedList *ls, int pos){
    if(pos < 0 || ls->head == NULL || pos >= ls->size){
        printf("Error");
    }
    else{
        Node *tmp = ls->head;
        if(pos == 0){
            ls->head = ls->head->next;
            if(ls->head == NULL){
                ls->tail = NULL;
            }
            ls->size--;
        }
        else if(pos == ls->size-1){
            for(int i=0;i<ls->size-2;i++){
                tmp=tmp->next;
            }
            ls->tail = tmp;
            tmp->next= NULL;
            ls->size--;
        }
        else{
        Node *prev = NULL;
        for(int i = 0; i < pos; i++){
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next = tmp->next;
        ls->size--;
    }
    }
}



void Show(LinkedList *ls){
    Node *tmp = ls->head;
    while(tmp != NULL){
        printf("%d ",tmp->value);
        tmp = tmp->next;
    }
}





int main(){
    LinkedList * LST1 = createLinkedList();
    insert(5,0,LST1);
    insert(3,1,LST1);
    insert(7,2,LST1);
    insert(9,3,LST1);
    insert(11,4,LST1);
    
    delete(LST1,0);
    Show(LST1);


    
}