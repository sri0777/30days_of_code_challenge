
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numB, int numEx) {
        int sum = 0;
         sum += numB;
        while(numB/numEx > 0){
            sum += numB/numEx ;
            numB = numB/numEx + numB%numEx;
        }
        return sum;
    }
};