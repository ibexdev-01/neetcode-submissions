class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //mapping
        std::unordered_map<int, int> mp;
        for(int n : nums){
            mp[n]++;
        }
       vector<pair<int, int>> vec;

       for(auto& i : mp){
        vec.push_back(i);
       }

       //sorting

       sort(vec.begin(), vec.end(),[](pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
       });

       //result
       vector<int>l;
       for(int i=0; i<k; ++i){
        
        l.push_back(vec[i].first);
       }

       return l;




        
    }
};
