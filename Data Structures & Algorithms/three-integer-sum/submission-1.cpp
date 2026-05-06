class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // vector<vector<int>> result;

        // for(int i = 0; i<nums.size()-2; ++i){
        //     if(nums[i]>0) break;

        // if(i>0 && nums[i]==nums[i-1]) continue;

        // int left = i + 1;
        // int right = nums.size() - 1;

        // while(left<right){
        //     int sum = nums[i]+nums[left]+nums[right];
        //     if(sum == 0){
        //         result.push_back({nums[i],nums[left],nums[right]});

        //     while(left<right && nums[left] == nums[left+1]) left++;
        //     while(left<right && nums[right] == nums[right-1]) right--;

        //     }else if(sum<0){
        //         left++;
                
        //     }else{
        //         right--;
        //     }
        //     left++;
        //     right--;
        // }

        // }
        // return result;
    
        vector<vector<int>> result;
        int n = nums.size();

        // Step 1: Sort (Crucial for Two Pointers)
        sort(nums.begin(), nums.end());

        // Step 2: Iterate through the array to fix the first number 'i'
        for (int i = 0; i < n - 2; ++i) { // Stop at n-2 so 'left' and 'right' have room
            
            // Optimization: If current number is positive, we can't sum to 0
            if (nums[i] > 0) break;

            // Duplicate Check 1: Skip the same 'i' to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    // Found a triplet!
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Duplicate Check 2: Skip identical 'left' numbers
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    
                    // Duplicate Check 3: Skip identical 'right' numbers
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    // Move pointers inward after processing
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++; // Sum is too small -> Need bigger number
                } 
                else {
                    right--; // Sum is too big -> Need smaller number
                }
            }
        }

        return result;
    }
};
