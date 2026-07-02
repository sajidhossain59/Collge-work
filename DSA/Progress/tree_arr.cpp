#include <bits/stdc++.h>
using namespace std;


struct Node {
    int val;
    Node *ls;
    Node *rs;
};

Node *createTree(int n){
    Node *t = new Node;
    t->val = n;
    t->ls = NULL;
    t->rs = NULL;
    return t;
}




int main(){
    Node *tr = createTree(1);
    tr->ls = createTree(2);
    tr->rs = createTree(3);
    tr->ls->ls = createTree(4);
    tr->ls->rs = createTree(5);
}

