class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> mp;

        for(string &s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for(auto pr : mp){
            result.push_back(pr.second);
        }

        return result;

    }
    
};
