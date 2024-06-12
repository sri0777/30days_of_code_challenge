#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        vector<int>remain;
        map<int,int> mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            if(mp.find(arr2[i])!=mp.end()){
                for(int j=0;j<mp[arr2[i]];j++){
                    v.push_back(arr2[i]);
                }
                mp.erase(arr2[i]);
              }
              
        }
    for (auto it : mp) {
            for (int j = 0; j < it.second; j++) {
                v.push_back(it.first);
            }
        }
    int s = arr1.size() - mp.size();
    sort(v.begin()+s,v.end());
   return v;
    }
};