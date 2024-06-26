#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
     void inOrder(TreeNode* root, vector<int>& vec){
      if(!root) return;
      inOrder(root->left,vec);
      vec.push_back(root->val);
      inOrder(root->right,vec);
    }
    TreeNode* construct(int l, int r, vector<int> &vec){
        if(l>r) return NULL;
        int mid = l + (r-l)/2;

        TreeNode* root = new TreeNode(vec[mid]);

        root->left = construct(l,mid-1,vec);
        root->right = construct(mid+1,r,vec);

        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
     vector<int> v;
     inOrder(root,v);
     int l =0;
     int r = v.size() - 1;
     return construct(l,r,v);   
    }
};