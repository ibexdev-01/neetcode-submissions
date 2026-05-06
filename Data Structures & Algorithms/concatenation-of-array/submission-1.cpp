class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // if(nums.empty()) return -1;
        nums.insert(nums.end(), nums.begin(),  nums.end());
        // vector<int> ans = nums;
        for(auto i : nums){
          cout << i ;
        }
        return nums;
        
    }
};