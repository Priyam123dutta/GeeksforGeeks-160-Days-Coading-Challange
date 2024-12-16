#include <iostream>
#include <vector>

using namespace std;

void pushZerosToEnd(vector<int>& arr) 
{
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            result.push_back(arr[i]);
        }
    }
    
    for (int i = result.size(); i < arr.size(); i++)
    {
        result.push_back(0);
    }

    arr = result;
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

    pushZerosToEnd(v);

    cout << "The answer is: ";

    for (int i : v)
    {
        cout << i << " ";
    }
}

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/