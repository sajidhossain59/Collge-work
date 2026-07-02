#include <bits/stdc++.h>
using namespace std;



struct linked_list{
    int val;
    linked_list *node;
};


// Single linked

linked_list * createnode(int value){
    linked_list *nd = new linked_list;
    nd->val = value;
    nd->node = NULL;
    return nd;
}



int main(){

    // Manually input for nodes

    linked_list *l_l = createnode(1);
    l_l->node = createnode(2);
    l_l->node->node = createnode(3);

    

    // Shows all the elements of linked list

    linked_list *nod = l_l;
    while(nod!=NULL){
        cout << nod->val << " ";
        nod = nod->node;
    }

    

    

}