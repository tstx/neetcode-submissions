class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i; j < prices.size(); j++) {
                int profit = prices[j] - prices[i];
                if (profit > max_profit) {
                    max_profit = profit;
                }
            }
        }
        return max_profit < 0 ? 0 : max_profit;
    }
};
