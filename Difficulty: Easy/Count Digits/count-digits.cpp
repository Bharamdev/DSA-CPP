//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int digit,N2=N, count=0;
        while(N2>0){
        digit=N2%10;
        if(digit!=0 && N%digit==0){
            count++;
        }
        N2=N2/10;
    }
    return count;
    };
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends