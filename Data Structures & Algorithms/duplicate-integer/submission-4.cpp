class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = 1;

    while(r < nums.size()){
        if(nums[l]==nums[r]) {
            return true;
        } else {
            l++;
            r++;
        }
    }        
    return false;
    }
};