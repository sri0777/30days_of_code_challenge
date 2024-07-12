#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(i+1);  
            }
            else if(s[i] == ')'){
                int ris = st.top();
                st.pop();
                reverse(s.begin() + ris,s.begin()+i);
            }
        }
        string str; int i = 0;
       while(s[i] != '\0'){
        if(s[i] != '(' && s[i] != ')'){
            str.push_back(s[i]);
        }
        i++;
       }
        return str;
    }
};