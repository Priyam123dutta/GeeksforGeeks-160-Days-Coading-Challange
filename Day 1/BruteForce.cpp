#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSecondLargest(vector<int> &arr) 
{
    sort(arr.begin(), arr.end());

    return (arr[arr.size() - 2] == arr[arr.size() - 1]) ?-1 : arr[arr.size() - 2];
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