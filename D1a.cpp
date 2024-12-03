// Problem Statement No.10
// Implement program to find all distinct subsets of a given set using Bit Masking Approach.
// Statement: Given an array of integers arr[]. The task is to find all its subsets.
// The subset cannot conatin ducplicate elements

// Input S = {1, 2, 2}
// Output {}, {1}, {2}, {1, 2}, {2, 2}, {1, 2, 2}

// Bit Masking

#include <bits/stdc++.h>
using namespace std;

// Function to find all subsets of the given set.
// Repeating Subsets are considered only once
vector<vector<int>> findPowerSet(vector<int> &nums)
{
    // Size of input set
    int bits = nums.size();

    // Total number of subsets
    unsigned int pow_set_size = pow(2, bits);

    // avoid permutation
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    // store subsets
    vector<string> list;

    for (int counter = 0; counter < pow_set_size; counter++)
    {
        vector<int> subset;
        string temp = "";

        for (int j = 0; j < bits; j++)
        {
            if (counter & (1 << j))
            {
                subset.push_back(nums[j]);
                temp += to_string(nums[j]) + '$';
            }
        }
        if (find(list.begin(), list.end(), temp) == list.end())
        {
            ans.push_back(subset);
            list.push_back(temp);
        }
    }
    return ans;
}

// Driver code
int main()
{
    vector<int> array;
    int num, k;
    cout << "Enter the number of elements in the set" << endl;
    cin >> num;
    cout << "Enter the set elements" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> k;
        array.push_back(k);
    }
    vector<vector<int>> power_set = findPowerSet(array);
    for (int i = 0; i < power_set.size(); i++)
    {
        for (int j = 0; j < power_set[i].size(); j++)
        {
            cout << power_set[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
