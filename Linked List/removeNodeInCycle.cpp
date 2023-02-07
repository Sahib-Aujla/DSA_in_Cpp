struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};



class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==nullptr)
            return;
        
        Node* slow=head;
        Node* fast=head;
        
        while(slow!=nullptr && fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(!(fast && fast->next)){
            return;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        Node* temp=slow->next;
        
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=nullptr;
    }
};