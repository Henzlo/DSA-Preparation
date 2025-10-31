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

//function to insert node at tail
void insertAtTail(Node* &tail, int d){

    Node* newNode = new Node(d);
    tail -> next = newNode;
    tail = newNode;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    //insert if no Node is present
    if(head == NULL){
        insertAtHead(head, d);
        return;
    }

    //insert at last Node
    if(head -> next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //create cnt to traverse to that position 
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    
    }

    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;


}


int main(){
    
    //creating new Node
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtPosition(head, tail, 5, 55);
    print(head);

    //20 10 30 40 50 
    
}