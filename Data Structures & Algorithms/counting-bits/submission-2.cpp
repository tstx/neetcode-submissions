class Solution {
public:
    // n = 4; range [0,n]
    vector<int> countBits(int n) {
        vector<int> out(n + 1); // out[0] = 0
        for (int i = 1; i <= n; i++) {
            out[i] = out[i & (i - 1)] + 1;
        }
        return out;
    }
};
