#include <bits/stdc++.h>
using namespace std;


struct Stack{
    int top;
    int size;
    char *chararr;
};

Stack *createstack(int n){
    Stack *stc = new Stack;
    stc->top = -1;
    stc->size = n;
    stc->chararr = new char[n];
    return stc;  
}

void push(char n, Stack *stc){
    if(stc->top == stc->size-1){
        return;
    }
    else{
        stc->chararr[++stc->top] = n;
    }
}

char pop(Stack*stack){
    if(stack->top == -1){
        return 0;
    }
    else{
        return stack->chararr[stack->top--];
    }
}

void display(Stack *stc){
    if(stc->top == -1){
        return;
    }
    else{
        for(int i=0;i<=stc->top;i++){
            cout << stc->chararr[i];
        }
        cout << endl;
    }
}


int main() {
    Stack *stack1 = createstack(100);
    Stack *stack2 = createstack(100);
    string strinput;
    int reducing_num = 0;

    int input;

    while(1){
        cout << "Select an option from below\n\n1.Enter a string\n2.Undo (CTRL-Z)\n3.Redo (CTRL-Y)\n4.Backspace\n5.Exit\n\nEnter your option:";
        cin >> input;
        switch(input){
            case 1:
            // Input a string
            cout << "Enter a string:";
            cin.ignore();
            getline(cin, strinput);
            strcpy(stack1->chararr, strinput.c_str());
            stack1->top = strinput.length()-1;
            break;

            case 2:
            // Undo
            if(stack1->top == strinput.length()-1){
                display(stack1);
                break;
            }
            else{
            push(pop(stack2),stack1);
            display(stack1);
            reducing_num++;}
            break;

            case 3:
            // Redo
            if(reducing_num == 0){
                display(stack1);
                break;
            }
            else{
            push(pop(stack1),stack2);
            display(stack1);
            reducing_num--;
            }
            break;

            case 4:
            // Backspace
            if(stack1->top == -1){
                display(stack1);
                
            }
            else{
            push(pop(stack1),stack2);
            display(stack1);}
            break;

            case 5:
            exit(1);
            break;

            default:
            cout << "Wrong input\n\n\n";
        }
        

    }

    
}