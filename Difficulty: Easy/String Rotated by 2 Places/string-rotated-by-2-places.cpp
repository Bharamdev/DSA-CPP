//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string str3="",str4="";
           for(int i=0;i<str1.size();i++){
               str3 += str1[(i+2)%str1.size()];
               str4 += str1[(i+str1.size()-2)%str1.size()]; 
        }
       
        if(str2==str3 || str2==str4){
            return 1;
        }
        else return 0;
    }

};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends