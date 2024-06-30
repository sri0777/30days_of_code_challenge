#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        vector<int> m;
       for (int i = 0; i < a.size(); i++) {
            if (st.empty() || a[i] > 0) {
                st.push(a[i]);
            } else {
                while (!st.empty() && st.top() > 0) {
                    // if (a[i] + st.top() == 0) {
                    //     st.pop();
                    //     break; // Asteroids annihilate each other
                    if (a[i] + st.top() < 0) {
                        st.pop(); // Current asteroid destroyed
                    } else {
                        // Current asteroid destroyed, but previous remains
                        break;
                    }
                }

                  if (st.empty() || st.top() < 0) {
                    st.push(a[i]);
                } else if (a[i] + st.top() == 0) {
                    st.pop(); // Both asteroids annihilate each other
                }
               
            }
        }
       while(!st.empty()){
           int x = st.top();
           m.push_back(x);
           st.pop();
       }
       reverse(m.begin(),m.end());
       return m;
    }
};