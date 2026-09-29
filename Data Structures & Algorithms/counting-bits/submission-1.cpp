class Solution {
public:
    // n = 4; range [0,n]
    vector<int> countBits(int n) {
        vector<int> out(n + 1);
        for (int i = 0; i <= n; i++) {
            int x = i;
            while (x) {
                x &= (x - 1);
                out[i]++;
            }
        }
        return out;
    }
};
