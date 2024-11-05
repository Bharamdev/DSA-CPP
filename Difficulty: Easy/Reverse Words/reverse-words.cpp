//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string result ="";
        string word="";
         for(int i=str.size()-1;i>=0;i--){
           if(str[i]=='.'){
               result += word + '.';
               word="";
           }
           else{
               word = str[i] +word;
           }
       }
       result += word;
       return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends