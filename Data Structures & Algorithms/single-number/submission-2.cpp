class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> seen;
        for (int i : nums) {
            bool inserted = seen.insert(i).second;
            if (!inserted) {
                seen.erase(i); // appears more than once
            }
        }
        return seen.empty() ? -1 : *seen.begin();
    }
};
