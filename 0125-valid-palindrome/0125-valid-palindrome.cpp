class Solution {
public:
    bool isPalindrome(string s) {
      string s2="";
      for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z' ) || (s[i]>='0' && s[i]<='9')){
            s2.push_back(s[i]);
        }
        if((s[i]>='A'  && s[i]<='Z')){
            s2.push_back(s[i]+32);
        }
      }
      int st=0;
      int e=s2.size()-1;
      while(st<=e) {
        if(s2[st]!=s2[e]){
            return false;
        }
        st++;
        e--;
      }
      return true;
    }
};