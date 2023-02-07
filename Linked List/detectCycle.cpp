#include <map>
#include<iostream>
using namespace std;
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
        ListNode* temp=head;
        map<ListNode*,bool> visited;
        while(temp!=nullptr){
            if(visited[temp]==true){
                return true;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return false;

    }
};