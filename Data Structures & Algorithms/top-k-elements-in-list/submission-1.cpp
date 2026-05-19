class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        vector<pair<int,int>> ans;
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        for(auto& obj : freq){
            ans.push_back({obj.second,obj.first});
        }
        sort(ans.begin(),ans.end());

        int i=0;
        while(k > 0){
            int temp = ans[ans.size() - 1 -i].second;
            result.push_back(temp);
            i++;
            k--;
        }

        return result;
    }
};
