class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r{};
        for (int i = 0; i < 32; i++) {
            int lastbit = n & 1;
            n >>= 1;
            r |= (lastbit << (31 - i));
        }
        return r;
    }
};
