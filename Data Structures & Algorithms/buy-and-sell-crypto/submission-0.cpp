class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0; int sell=1; int max_profit=INT_MIN;
        while(buy<sell && sell<prices.size()){
            max_profit=max(max_profit,prices[sell]-prices[buy]);
            if(prices[sell]-prices[buy]<0){
                buy=sell;
                sell++;
            }

            else if(prices[sell]-prices[buy]>=0){
                sell++;
            }
        }
        if(max_profit<0) return 0;

        return max_profit;
    }
};
