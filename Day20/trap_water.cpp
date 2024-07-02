#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> leftmax(vector<int> &height, int &n){
        vector<int> leftmax(n,0);
        leftmax[0] = height[0];
        for(int i=1;i<n;i++){
          leftmax[i] = max(leftmax[i-1],height[i]);
        }
        return leftmax;
    }
    vector<int> rightmax(vector<int> &height, int &n){
        vector<int> rightmax(n,0);
        rightmax[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
          rightmax[i] = max(rightmax[i+1],height[i]);
        }
        return rightmax;
    }
    public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left = leftmax(height,n);
        vector<int>right = rightmax(height,n);
        int sum = 0;
    for(int i=0;i<n;i++){
        int h = min(left[i],right[i]) - height[i];
        sum +=h;
    }
    return sum;
    }
};