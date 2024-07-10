#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int dir = 0;
        for(int i = 0; i < logs.size(); i++){
            if(dir < 0) dir = 0;
            if(logs[i] == "../" ){
               dir --;
            }
            else if(logs[i] == "./") continue;
            else {
                dir++;
            }
        }
        if(dir < 0) return 0;
         return dir;
        
    }
};