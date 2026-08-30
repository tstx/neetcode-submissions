class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numCount;
        for (int num : nums) {
            numCount[num]++;
        }

        vector<pair<int, int>> countNum;
        for (auto& p: numCount) {
            countNum.push_back({p.second, p.first});
        }
        sort(countNum.begin(), countNum.end());

        vector<int> res;
        int n = countNum.size();
        for (int i = n - 1; i >= n - k ; i--) {
            res.push_back(countNum[i].second);
        }

        return res;
    }
};
