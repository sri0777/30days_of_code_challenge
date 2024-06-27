#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        map<int,int> mp;
       for(int i=0;i<n;i++){
        for(int j=0;j<edges[i].size();j++){
            mp[edges[i][j]]++;
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<edges[i].size();j++){
            cout<<edges[i][j]<<" ";
        }
       }
       return 1;
    }
};