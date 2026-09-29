class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            // last bit check, then move
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};
