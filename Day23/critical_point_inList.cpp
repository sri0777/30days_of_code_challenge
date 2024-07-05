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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
         if (!head || !head->next || !head->next->next) {
          return {-1, -1};
    }
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* front = temp->next;
        vector<int> res;
        vector<int> result;
        int c = 1;
        while(front!=NULL){
            if((temp->val < prev->val && temp->val < front->val) ||
            ( temp->val > prev->val &&  temp->val > front->val)){
                res.push_back(c);
            }
            c++;
            prev = temp;
            temp = front;
            front = front->next;

        }
        int n = res.size();
        if(n<2) return {-1,-1};
        int mini = INT_MAX;
        for(int i=1;i<n;i++){
            mini = min(mini,res[i]-res[i-1]);
        }
        result.push_back(mini);
        result.push_back(res[n-1]-res[0]);
        
        return result;
    }
};