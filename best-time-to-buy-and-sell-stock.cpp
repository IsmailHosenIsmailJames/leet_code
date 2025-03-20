// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0, buy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (buy > prices[i])
        {
            buy = prices[i];
        }
        else
        {
            if (prices[i] - buy > profit)
            {
                profit = prices[i] - buy;
            }
        }
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int max = maxProfit(prices);
    cout << max;
}