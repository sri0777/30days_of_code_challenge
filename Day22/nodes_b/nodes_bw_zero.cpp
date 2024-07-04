#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = new ListNode(-1);
        ListNode* res =  curr;
        ListNode* temp = head->next;
        int sum = 0;
        while(temp!=NULL){
           if(temp->val != 0){
                sum += temp->val;
            }
            else{
                curr->next = new ListNode(sum);
                curr = curr->next;
                sum = 0;
            }
         temp = temp->next;
    }
    curr->next = NULL;
        return res->next;
    }
};