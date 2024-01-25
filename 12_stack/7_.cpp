// linked list implementation of stack
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty";
        }
        head=head->next;
    }
    void top(){
        if(head==NULL){
            cout<<"stack is empty";
        }
        cout<<head->val;
    }
    
};