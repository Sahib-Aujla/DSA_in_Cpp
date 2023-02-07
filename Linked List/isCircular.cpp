#include <iostream>
//  Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 


/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    if(head==NULL){
        return true;
    }
    if(head==head->next){
        return true;
    }
    
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
       
        return false;
    }
    if(temp==head){
        
        return true;
    }
   // Your code here
}
