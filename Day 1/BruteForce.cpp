#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSecondLargest(vector<int> &arr) 
{
    sort(arr.begin(), arr.end());

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            return arr[i];
        }
    }
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

    int result = getSecondLargest(v);

    cout << "The Second Largest number is: " << result;

    return 0;
}

/*
Time Complexity: O(nlogn)
Space Complexity: O(1)
*/