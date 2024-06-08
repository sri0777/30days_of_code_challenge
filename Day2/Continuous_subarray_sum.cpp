#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        unordered_map<int,int>mp;//storing remainder with its index
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rest = sum%k;
        if(mp.find(rest)!=mp.end()){
            if(i-mp[rest]>=2)
             return true;
        }
        else{
            mp[rest] = i;
        }
        }
        return false;
    }
};