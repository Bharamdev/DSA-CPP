class Solution {
public:
    int reverse(int x) {
    int ans=0;
    // x=abs(x);
    while(x>0){
        int digit=x%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN)){
            return 0;
        }
        ans=(ans*10)+digit;
        x/10;
    }
    return ans;
    }
};