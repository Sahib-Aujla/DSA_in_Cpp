#include <iostream>
using namespace std;

class Node{
public:
    int data{};
    Node *next{};

    Node(int data) : data(data) {}
    ~Node(){
        delete next;
        next=nullptr;
    }
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

    while(cnt<position){
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

void deleteNode(Node*& tail,Node*& head,int position){
    if(position==1){
        Node* temp=head->next;
        head->next=nullptr;
        delete head;
        head=temp;

    }else{

    Node* curr=head;
    Node* prev=nullptr;
    int cnt=1;

    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    
    prev->next=curr->next;
    curr->next=nullptr;
    delete curr;
    if(prev->next==nullptr){
        tail=prev;
    }

    }
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
    insertAtPosition(tail,head,5,24);
    print(head);
    insertAtPosition(tail,head,6,25);
    print(head);
    insertAtHead(head,33);
    print(head);
    deleteNode(tail,head,3);
    print(head);
 //deleteNode(head,1);
  //  print(head);

    return 0;
}