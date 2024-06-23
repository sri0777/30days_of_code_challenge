//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int N){
       long sum  = 0,maxi=0;
       int i=0,j=0;
       int size = arr.size();
       while(j<size){
           sum = sum + arr[j];
           if(j-i+1 < k){  //j-i+1 gives the window size
               j++;
           }
           else if(j-i+1 == k){  
               maxi = max(maxi,sum);
               sum = sum - arr[i];
               i++;
               j++;
           }
       }
      return maxi; 
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends