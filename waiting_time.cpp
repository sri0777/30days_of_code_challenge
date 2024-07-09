#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cstm) {
        double res = 0;
        int time = 0;
        int a = cstm[0][0];
        int b = cstm[0][1];
        time += a + b;
        res += b;
        for(int i = 1; i < cstm.size(); i++){
            a = cstm[i][0];
            b = cstm[i][1];
          if(time > a){
            time +=  b;
          }
          else{
            time = a+b;
          }
            int wait = time - a;
            res += wait;
        }
        return res/cstm.size();
    }
};