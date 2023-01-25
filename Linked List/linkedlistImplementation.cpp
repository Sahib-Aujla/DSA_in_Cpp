#include <iostream>
using namespace std;

class Node{
public:
    int data{};
    Node *next{};

    Node(int data) : data(data) {}
};

void insertAtHead(Node* & head, int data){
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;

}

void insertAtTail(Node* & tail, int data){
    Node * temp=new Node(data);
    tail->next=temp;
    //tail=tail->next;   
    tail=temp;
}

void insertAtPosition(Node*& tail,Node*&head,int position,int data){

    if(position==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==nullptr){
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert=new Node(data);
    
    nodeToInsert->next=temp->next;
temp->next=nodeToInsert;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node *node=new Node(4);
    Node *head=node;
    Node *tail=node;
    print(node);
    insertAtHead(head,55);
    print(head);
    insertAtTail(tail,99);
    print(head);
    insertAtTail(tail,111);
    print(head);
    insertAtPosition(tail,head,3,21);
    print(head);
    insertAtPosition(tail,head,6,24);
    print(head);
    insertAtPosition(tail,head,7,25);
    print(head);
insertAtHead(head,33);
    print(head);

    return 0;
}