#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1;
        int dirn = 1;

        for(int i=0;i<time;i++) {
            if(pos == 1) {
                dirn = 1; 
            } else if(pos == n) {
                dirn = -1;
            }
            pos += dirn; 
        }

        return pos;
    }
};
