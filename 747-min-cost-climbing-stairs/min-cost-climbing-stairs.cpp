class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);

        // Base cases
        dp[0] = cost[0];
        dp[1] = cost[1];

        // Calculate minimum cost for each step
        for (int i = 2; i < n; ++i) {
            dp[i] = min(dp[i - 1] + cost[i], dp[i - 2] + cost[i]);
        }

        // The minimum cost to reach the top is the minimum of the last two steps
        return min(dp[n - 1], dp[n - 2]);
    }
};