class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> res;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            std::sort(str.begin(), str.end());
            res[str].push_back(i);
        }
        
        vector<vector<string>> out;
        for (const auto& [key, vec] : res) {
            vector<string> group;
            for (int i : vec) {
                group.push_back(strs[i]);
            }
            out.emplace_back(group);
        }

        return out;
    }
};
