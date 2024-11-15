class Solution {
public:
    bool buddyStrings(string s, string goal) {
        vector<int> arr;
        if (s.length() != goal.length()) return false; 
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                arr.push_back(i);
            }
        }
        if(arr.size()==2){
            int i=arr[0],j=arr[1];
            return s[i]==goal[j] && s[j]==goal[i];
        }
        vector<int> freq(26,0);
        if(s==goal){
            for(char c:s){
                freq[c-'a']++;
                if(freq[c-'a']>1) return true;
            }
        }
        return false;
    }
};