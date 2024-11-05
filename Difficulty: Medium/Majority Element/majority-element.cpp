//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int cnt=0,ele;
        for(int i=0;i<arr.size();i++){
            if(cnt==0){
                ele=arr[i];
                cnt=1;
            }
            else if(arr[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==ele){
                cnt2++;
            }
        }
        if(cnt2 > (arr.size()/2)) return ele;
        else return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends