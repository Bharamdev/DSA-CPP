//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        // code here
        
        // map<int,int> mpp;
        // int left=0,right=0;
        // int sum=arr[right];
        // // int a,b;
        // while(right<=arr.size()){
            
        //     if(sum<s){
        //         right++;
        //         sum+=arr[right];
        //     }
        //     else if(sum==s){
        //         return {left+1,right+1};
        //     }
        //     else{
        //         sum-=arr[left];
        //         left++;
        //     }
            
        // }
        // return {-1};
        
          map<int,int> mpp;
          long long sum=0;
          for(int i=0;i<arr.size();i++){
              sum+=arr[i];
              if(sum==s){
                  return {1,i+1};
              }
              int rem=sum-s;
              if(mpp.find(rem) != mpp.end()){
                  return {mpp[rem]+2,i+1};
                  
              }
              if(mpp.find(sum)==mpp.end()){
                  mpp[sum]=i;
              }
          }
          return {-1};
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends