class Solution {
public:
    // n = 4; range [0,n]
    vector<int> countBits(int n) {
        vector<int> out;
        for (int i = 0; i <= n; i++) {
            int count = 0;
            int x = i;
            while (x) {
                x &= (x - 1);
                count++;
            }
            out.push_back(count);
        }
        return out;
    }
};
