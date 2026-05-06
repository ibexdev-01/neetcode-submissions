class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //mapping
        std::unordered_map<int, int> mp;
        for(int n : nums){
            mp[n]++;
        }
        //map sorting usinging vector pair
        vector<pair<int, int>> elements;
        for(auto& entry : mp){
            elements.push_back({entry.first, entry.second});
        }

        //sorting
        sort(elements.begin(), elements.end(),[](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });
        vector<int>result;
        for(int i=0; i<k; ++i){
            result.push_back(elements[i].first);
        }

        return result;




        
    }
};
