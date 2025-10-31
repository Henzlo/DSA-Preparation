#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;
    
    //constrcutor
    Node(int d ){
        this -> data = d;
        this -> next = NULL;
    }
    
    //destructor
    ~Node(){
        int value = this -> data;
        
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        
        cout << "Memory is free for this node with the data: " << value;
        
    }
};


//print data of LinkedList
void print(Node* head){

    //if list is empty
    if(head == NULL){
        cout << "List is empty: " << endl;
        return;
    }

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl;

}


// function to insert node at head
void insertAtHead(Node* &head, int d){
    
    Node* newNode = new Node(d);
    newNode -> next = head;
    head = newNode;

}


int main(){
    
    //creating new Node
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);
    print(head);

    
}