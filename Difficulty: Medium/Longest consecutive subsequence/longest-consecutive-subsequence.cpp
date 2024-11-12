//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(vector<int>& arr) {
        // Your code here
        unordered_set<int> ans;
        int x;
        int cnt=1;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            ans.insert(arr[i]);
        }
        for(auto it:ans){
            if(ans.find(it-1)==ans.end()){
                x=it;
                cnt=1;
                while(ans.find(x+1)!=ans.end()){
                    cnt+=1;
                    x=x+1;
                }
            }
            maxi=max(maxi,cnt);   
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.findLongestConseqSubseq(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends