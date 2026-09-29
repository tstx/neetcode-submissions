class Solution {
public:
    // n & (n - 1) löscht das niedrigste gesetzte Bit.
    // Die Schleife läuft einmal pro 1-Bit, nicht einmal pro Bitposition.
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= n - 1;
            ++count;
        }
        return count;
    }
};
