class Solution {
public:
    const char delimiter = '#';

    string encode(vector<string>& strs) {
        string out;
        for (const auto& s : strs) {
            out.append(to_string(s.size()));
            out.push_back(delimiter);
            out.append(s);
        }
        return out;
    }

    vector<string> decode(string s) {
        // 2#hi3#wow
        // 012345678
        vector<string> out;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != delimiter) {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            out.push_back(s.substr(i, length));
            i = i + length;
        }
        return out;
    }
};
