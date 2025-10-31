#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
        int data;
        Node* nextNode;
        
        //constrcutor
        Node(int d ){
            this -> data = d;
            this -> nextNode = NULL;
        }
        
        //destructor
        ~Node(){
            int value = this -> data;
            
            //memory free
            if(this -> nextNode != NULL){
                delete nextNode;
                this -> nextNode = NULL;
            }
            
            cout << "Memory is free for this node with the data: " << value;
            
        }
};