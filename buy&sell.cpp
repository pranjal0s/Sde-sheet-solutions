class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

		// add every single profit to maximize profits
        for(int i = 1; i < prices.size(); i++)
            if(prices[i] > prices[i-1]) profit += prices[i] - prices[i-1];
			
        return profit;
    }
};
