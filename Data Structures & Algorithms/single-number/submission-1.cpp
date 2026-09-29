class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> counts;
        for (int i : nums) {
            counts[i]++;
        }
        for (auto const& [key, val] : counts) {
            if (val == 1) {
                return key;
            }
        }
        return -1;
    }
};
