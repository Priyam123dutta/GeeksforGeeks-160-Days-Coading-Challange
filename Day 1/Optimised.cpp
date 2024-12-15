#include <iostream>
#include <vector>

using namespace std;

int getSecondLargest(vector<int> &arr) 
{
    int max = -1, secondMax = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if ((arr[i] < max) && (arr[i] > secondMax))
        {
            secondMax = arr[i];
        }
    }
    
    return secondMax;
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
Time Complexity: O(n)
Space Complexity: O(1)
*/
