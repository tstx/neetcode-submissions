class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_nums;
        for (int num : nums) {
            bool inserted;
            std::tie(std::ignore, inserted) = unique_nums.insert(num);
            if (!inserted) {
                return true;
            }
        }
        return false;
    }
};