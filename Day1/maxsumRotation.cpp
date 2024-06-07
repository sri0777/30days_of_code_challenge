//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
public:
    long long max_sum(int a[], int n) {
        long long sum = 0;
        long long s = 0;
      
        for (int i = 0; i < n; i++) {
            sum += long(a[i]);
            s += i * long(a[i]);
        }

        long long cur = s;
        long long max_s = s;
       
        for (int i = 1; i < n; i++) {
            cur = cur + sum - n *(long) a[n - i];
            if (cur > max_s) {
                max_s = cur;
            }
        }
        return max_s;
    }
};




//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends