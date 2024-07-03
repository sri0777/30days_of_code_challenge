#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=3) return 0;
        sort(nums.begin(),nums.end());
       int mins = INT_MAX;
       mins = min(mins,nums[n-4]-nums[0]);
       mins = min(mins,nums[n-1]-nums[3]);
       mins = min(mins,nums[n-2]-nums[2]);
       mins = min(mins,nums[n-3]-nums[1]);
       return mins;
    }
};