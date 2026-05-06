class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // unordered_map<int, int>mp;
        // for(int i=0; i<numbers.size(); ++i){
        //     int current = numbers[i];
        //     int needed = target - current;

        //     if(mp.count(needed)){
        //         return {mp[needed] + 1 , i + 1};
        //     }
        //     mp[current] = i;
        // }
        // return {};

        int left =0;
        int right = numbers.size()-1;

        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                return {left+1, right+1};
            }else if (sum<target){
                left++;
            } else {
                right--;
            }
        }
        return {};
        
    }
};
