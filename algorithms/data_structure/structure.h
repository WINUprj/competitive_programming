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