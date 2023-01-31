/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class ListNode
{
public:
    int data{};
    ListNode *next{};

    // constructor
    ListNode(int d)
    {
        data = d;
    }

    ~ListNode()
    {
        delete next;
        next = nullptr;
    }
};
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){
            return nullptr;
        }

        ListNode* next=nullptr;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        int count=0;

        ListNode* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }


        if(count<k)return head;

        int cnt=0;
        while(curr!=nullptr && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        
        if(next!=nullptr){
        head->next=reverseKGroup(next,k);
        }

        
        
        return prev;


    }
};