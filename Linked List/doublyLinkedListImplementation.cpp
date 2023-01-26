#include <iostream>
using namespace std;

class Node{

    public:
    int data{};
    Node *prev{};
    Node *next{};

    //constructor
    Node(int data):data(data){}

    ~Node(){
        delete prev;
        prev=nullptr;
        delete next;
        next=nullptr;
    }
};

void print(Node*& head){
    Node* temp=head;

    while(temp!=nullptr){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node*& head){
    Node* temp=head;
int len=0;
    while(temp!=nullptr){
        ++len;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node*& head, Node*&tail,int d){
    if(head==nullptr){
Node* temp=new Node(d);
    head=temp;
tail=temp;
    }else{
Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    

}
void insertAtTail(Node*& head, Node*&tail,int d){
    if(tail==nullptr){
Node* temp=new Node(d);
     head=temp;
tail=temp;

    }else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void insertAtPosition(Node*& head, Node*&tail,int position,int data){

    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }

    Node* temp=head;
    int cnt=1;

    while(cnt<position-1){
        ++cnt;
        temp=temp->next;
    }
    if(temp->next==nullptr){
        insertAtTail(head, tail,data);
        return;
    }

    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    newNode->prev=temp;
    temp->next=newNode;
}

void deleteAtPosition(Node*&head, Node*&tail,int position){
    if(position==1){
        Node*temp=head;
        temp->next->prev=nullptr;
        head=temp->next;
        temp->next=nullptr;
        delete temp;
        
    }else{
    Node* curr=head;
    Node* prev=nullptr;
    int cnt=1;

    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=nullptr;
    prev->next=curr->next;
     if(curr->next==nullptr){
        
        tail=prev;
    

    }else{
    curr->next->prev=curr->prev;
     curr->next=nullptr;
    }
    delete curr;
    }
    
}

int main(){
    Node *node = new Node(10);
    Node *head=node;
    Node *tail=node;
cout<<"Length "<<getLength(head)<<endl;

    print(head);
    insertAtHead(head,tail,55);
    print(head);
    insertAtTail(head,tail,99);
    print(head);
    insertAtPosition(head,tail,1,33);
    print(head);
insertAtPosition(head,tail,3,83);
    print(head);
    deleteAtPosition(head,tail,5);
    print(head);


cout<<"Length "<<getLength(head)<<endl;

    return 0;
}