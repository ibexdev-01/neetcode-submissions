class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); ++i){
            for(int j=i+1; j<nums.size(); ++j){
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
    }
};