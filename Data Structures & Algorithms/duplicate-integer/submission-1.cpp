class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() < 1) return false;
        set<int>mp;
        for(int i : nums){
            auto it = mp.find(i);
            if (it != mp.end()) return true;
              mp.insert(i);
        }

        return false;
        
    }
};