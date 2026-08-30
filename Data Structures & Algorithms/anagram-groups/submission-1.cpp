class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (int i = 0; i < strs.size(); i++) {
            string str = strs[i];
            std::sort(str.begin(), str.end());
            res[str].push_back(strs[i]);
        }
        
        vector<vector<string>> out;
        for (const auto& [key, vec] : res) {
            out.emplace_back(vec);
        }

        return out;
    }
};
