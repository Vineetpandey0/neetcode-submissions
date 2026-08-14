class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mini = prices[0];
        for(int it : prices){
            int cost = it - mini;
            mini = min(it, mini);
            profit = max(profit, cost);
        }
        return profit;
    }
};
