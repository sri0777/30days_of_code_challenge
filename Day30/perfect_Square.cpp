#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long sqrt = 1;
        
        while(sqrt <= num){
           long long res = sqrt * sqrt;
           if(res >= num) break;
            sqrt++;
        }
        cout << sqrt;
      return sqrt*sqrt == num;
    }
};