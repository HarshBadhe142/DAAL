// Problem Statement No. 12
// Implement program to print all subsets of a given Set or Array.
// Statement: Given a set of positive integers, find all its subsets.

// Bit Manipulation

#include <bits/stdc++.h>
using namespace std;

void findSubsets(vector<int> &nums, int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << nums[j] << " ";
            }
        }
        cout << endl;
    }
}

// Driver Code
int main()
{
    vector<int> array;
    int n, temp;
    cout << "Enter the number of elements in the set" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        array.push_back(temp);
    }
    findSubsets(array, n);
    return 0;
}