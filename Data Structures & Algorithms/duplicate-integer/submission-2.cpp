class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // if(nums.size() < 1) return false;
        // set<int>mp;
        // for(int i : nums){
        //     auto it = mp.find(i);
        //     if (it != mp.end()) return true;
        //       mp.insert(i);
        // }

        // return false;
        int n = nums.size();
        int l = 0;
        int r = 1;
        sort(nums.begin(), nums.end());
        

        while(r<nums.size()){
            if(nums[l]==nums[r]) return true;
            l++;
            r++;
        }
        return false;
        
    }
};