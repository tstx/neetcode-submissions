class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        std::unordered_map<char, char> openToClose = {
            {'(', ')'},
            {'[', ']'},            
            {'{', '}'}
        };
        for (const char c: s) {
            if (openToClose.count(c))
                st.push(c);
            else {
                if (st.empty() || openToClose[st.top()] != c) {
                    return false;
                } else {
                    st.pop();
                }

            }
        }
        return st.empty();
    }
};
