#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &arr, int begin, int end)
{
    if (begin > end)
    {
        return;
    }
    
    reverse(arr, begin + 1, end - 1);
    
    swap(arr[begin], arr[end]);
}

void reverseArray(vector<int> &arr) 
{
    reverse(arr, 0, arr.size() - 1);
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

    reverseArray(v);

    cout << "The Reversed array is: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/