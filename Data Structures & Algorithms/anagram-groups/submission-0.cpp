class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> mp;

        for(auto str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        }

        vector<vector<string>> result;
        for(auto& obj : mp){
            result.push_back(obj.second);
        }

        return result;
    }
};
