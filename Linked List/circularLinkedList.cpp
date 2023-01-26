#include <iostream>

using namespace std;


class Node{
  public:
    int data{} ;
    Node *next{} ;

    //constructor
    Node(int d){
data=d;
    }

~Node(){
    delete next;
    next=nullptr;
}

};




void insertNode(Node*&tail,int element,int value){

    if(tail==nullptr){
        Node*node=new Node(value);
        node->next=node;
        tail=node;
    }else{
        Node*temp=tail;
        while(element!=temp->data){
            temp=temp->next;
        }
        Node* newNode=new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;

    }

}
void print(Node* tail){
    Node*temp=tail;

    do{
cout<<tail->data<<" ";
tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* node1=new Node(4);
    Node*tail=nullptr;
//print( tail);

    insertNode(tail,4,55);
print( tail);
insertNode(tail,55,45);
print( tail);
   
    return 0;
}

