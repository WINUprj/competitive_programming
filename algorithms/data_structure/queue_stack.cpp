#include <bits/stdc++.h> 
#include "structure.h"

using namespace std; 

typedef string str; 
// implementation of queue with node 
class Stack {
    public:
    Node* top; 
    
    int pop(){
        if (top != NULL){
            int value = top->data; 
            top = top->next; 
            return value; 
        }
        return -1; 
    }

    void push(int item){
        Node* new_node = new Node(); 
        new_node->data = item; 
        new_node->next = top; 
        top = new_node; 
    }
    
    int peek(){
        return top->data; 
    }
};

class Queue {
    public: 
    Node* first, last; 
    
    void enqueue(int value){
        if (first == NULL){
            first = new Node(); 
            last = *first; 
        }
        else{
            Node* in_node = new Node(); 
            last.next = in_node; 
            last = *in_node; 
        }
    }
    
    int dequeue(){
        if (first != NULL){
            int val = first->data; 
            first = first->next; 
            return val; 
        }
        return -1;
    }
}; 

int main(){
    // note that queue and stack can be virtually implemented by vector 
    // stack 
    Stack* s = new Stack(); 
    s->push(12); 
    s->push(15); 
    cout << s->peek() << endl; 

    // Queue 
    Queue* q = new Queue(); 
    q->enqueue(5); 
    q->enqueue(6); 
    q->enqueue(9);  
    return 0; 
}