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
        delete next;
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

void insertAtHead(Node*& head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertAtTail(Node*& tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

int main(){
    Node *node = new Node(10);
    Node *head=node;
    Node *tail=node;
cout<<"Length "<<getLength(head)<<endl;

    print(head);
    insertAtHead(head,55);
    print(head);
    insertAtTail(tail,99);
    print(head);





cout<<"Length "<<getLength(head)<<endl;

    return 0;
}