

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
   int val;
    ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr){
            return false;
        }
        if(head->next==nullptr){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;

        while(slow!=nullptr && fast!=nullptr){
           
            slow=slow->next;
            fast=fast->next;
            if(fast!=nullptr){
            fast=fast->next;
            }
             if(slow==fast){
                return true;
            }
        }
        return false;
    }
};