#include <iostream>

using namespace std;

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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* temp=head;

        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }
        int mid=(len/2)+1;
        int cnt=1;
        ListNode* ans=head;
        while(cnt<mid){
            ans=ans->next;
            ++cnt;
        }
        head=ans;
        return head;
    }
};