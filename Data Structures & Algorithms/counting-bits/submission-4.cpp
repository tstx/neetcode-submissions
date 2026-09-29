class Solution {
public:
    // out[i] = out[i & (i - 1)] + 1
    // i & (i - 1) entfernt das niedrigste 1-Bit; dessen Zählung steht schon in out.
    // +1 für genau dieses entfernte Bit.
    //
    // i = 3 (0011):  3 & 2 = 0010 = 2,  out[2] + 1 = 1 + 1 = 2
    // i = 4 (0100):  4 & 3 = 0000 = 0,  out[0] + 1 = 0 + 1 = 1
    vector<int> countBits(int n) {
        vector<int> out(n + 1);
        for (int i = 1; i <= n; i++)
            out[i] = out[i & (i - 1)] + 1;
        return out;
    }
};
