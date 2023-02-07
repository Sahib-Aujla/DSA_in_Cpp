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
struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }

        ListNode* curr=head;
        ListNode* temp=nullptr;
        while(curr!=nullptr){
            if(curr->next!=nullptr && curr->val==curr->next->val){
                
                while(curr->next!=nullptr &&curr->val==curr->next->val){
                    curr=curr->next;
                }
                if(temp==nullptr ){
                    head=curr->next;
                }else{
                temp->next=curr->next;
                
                }
                curr=curr->next;
            }else{
                temp=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};