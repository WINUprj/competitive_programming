#include <bits/stdc++.h> 

using namespace std; 

typedef string str; 

// struct implementation of linkedlist 
class Node {
    public: 
        int data; 
        struct Node* next; 
        
        void append(int val){
            Node* end = new Node(); 
            end->data = val; 
            Node* temp = this; 
            while(temp->next != NULL){
                temp = temp->next; 
            }
            temp->next = end; 
        }
}; 

void print_linkedlist(Node* n); 

int main(){
    // linkedlist in struct 
    Node* head; // note that it is a pointer to the Node data  
    Node* second; 
    Node* third;  
    // allocate three Nodes in the heap 
    head = new Node();  // assign new Node to allocate the actual Nodes 
    second = new Node(); 
    third = new Node(); 

    Node* fourth = new Node(); 
    
    head->data = 1; 
    second->data = 2; 
    third->data = 3; 
    fourth->data = 4; 
    head->next = second; 
    second->next = third; 
    third->next = fourth; 
    fourth->next = NULL; 
    head->append(5); 

    print_linkedlist(head); 
}

void print_linkedlist(Node* n){
    while (n != NULL){
        cout << n->data << endl; 
        n = n->next; 
    }
}