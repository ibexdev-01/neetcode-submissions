class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); ++i){
            int current = nums[i];
            int needed = target - current;
            if(mp.count(needed)){
                return {mp[needed],i};
            }
            mp[current] = i;
        }

        return {};
        // int n = nums.size();
        // int left =0; 
        // int right = n-1;

        // while(left<right){
        //     int sum = nums[left] + nums[right];
        //     if(sum == target){
        //         return {left, right};
        //     }else if(sum<target){
        //         left++;
        //     } else {
        //         right--;
        //     }
        // }
        // return {};


        
    }
};
