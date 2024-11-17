class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0,e=s.size()-1;
        while(st<e){
            if((('a'<=s[st] && s[st]<='z')  || ( 'A'<=s[st] && s[st]<='Z')) && (
                ('a'<=s[e] && s[e]<='z')  ||  ('A'<=s[e] && s[e]<='Z'))){
                swap(s[st],s[e]);
            st++;
            e--;
            }
            else if(!(('a'<=s[st] && s[st]<='z')  || ( 'A'<=s[st] && s[st]<='Z'))){
                st++;
            }
            else{
                e--;
            }
        }
        return s;
    }
};