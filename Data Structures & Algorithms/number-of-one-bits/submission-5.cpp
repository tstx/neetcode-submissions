class Solution {
public:
    // n & (n - 1) löscht das niedrigste gesetzte Bit.
    // Die Schleife läuft einmal pro 1-Bit, nicht einmal pro Bitposition.
    // Beispiel n = 3 (0011):
    //   0011 & 0010 = 0010
    //   0010 & 0001 = 0000  → 2 Iterationen, Ergebnis 2
    // n         = 1 0 1 1 0 0 0 0
    // n - 1     = 1 0 1 0 1 1 1 1
    // n & (n-1) = 1 0 1 0 0 0 0 0
    //                  ^ weg
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= n - 1;
            ++count;
        }
        return count;
    }
};
