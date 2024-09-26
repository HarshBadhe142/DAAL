/*
#include <bits/stdc++.h>
using namespace std;

// Returns the count of ways we can
// sum coins[0...n-1] coins to get sum "sum"
int countWays(const vector<int>& coins, int n, int sum) {
  
    // If sum is 0 then there is 1 solution
    // (do not include any coin)
    if (sum == 0) return 1;

    // 0 ways in the following two cases
    if (sum < 0 || n == 0) return 0;

    // count is sum of solutions (i)
    // including coins[n-1] (ii) excluding coins[n-1]
    return countWays(coins, n, sum - coins[n - 1]) + 
            countWays(coins, n - 1, sum);
}

// Driver code
int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    cout << countWays(coins, coins.size(), sum);
    return 0;
}

*/