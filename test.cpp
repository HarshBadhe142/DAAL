#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(vector<int> set, int n, int sum) {
    // Base cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    // If last element is greater than sum, ignore it
    if (set[n - 1] > sum)
        return subsetSum(set, n - 1, sum);

    // Check if sum can be obtained by including or excluding the last element
    return subsetSum(set, n - 1, sum) || subsetSum(set, n - 1, sum - set[n - 1]);
}

int main() {
    vector<int> set = {3, 34, 4, 12, 5, 2};
    int sum = 9;

    if (subsetSum(set, set.size(), sum))
        cout << "Found a subset with sum " << sum << endl;
    else
        cout << "No subset with sum " << sum << endl;

    return 0;
}