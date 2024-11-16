class Solution {
public:
    bool isHappy(int n) {
        int digit;
        while(n!=1 && n!=4){
            int ans=0;
        while(n>0){
            digit=n%10;
            ans+=(digit*digit);
            n=n/10;
        }
        n=ans;
        }
    return n==1 ;
    
    }
};