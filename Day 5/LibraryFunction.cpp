#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& arr)
{
    next_permutation(arr.begin(), arr.end());
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    nextPermutation(v);

    cout << "The next permutation is: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}