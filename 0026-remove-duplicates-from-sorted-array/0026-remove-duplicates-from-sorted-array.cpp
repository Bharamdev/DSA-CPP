class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        set<int> s(nums.begin(),nums.end());
        nums.clear();
        for(auto it:s){
            nums.push_back(it);
        }
        // int index=0;
        return s.size();
    }
};