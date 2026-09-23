class Solution {
public:
    bool isPalindrome(string s) {
        string check;
        for (auto c: s) {
            if (isalnum(c)) {
                check += tolower(c);
            }
        }
        return check == string(check.rbegin(), check.rend());
    }
};
