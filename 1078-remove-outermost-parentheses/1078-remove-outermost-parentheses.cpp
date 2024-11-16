class Solution {
public:
    string removeOuterParentheses(string s) {
        string ss;
        int cnt=0;
        for(char c:s){
            if(c=='('){
                if(cnt>0){
                    ss+=c;
                }
                cnt++;
            }
            else if(c==')'){
                cnt--;
                if(cnt>0){
                    ss+=c;
                }
            }
        }
        return ss;
    }
};