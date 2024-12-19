// Observing Next Permutation Pattern

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& arr)
{
    int pivot = -1;
    
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
    }
    
    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    
    for (int i = arr.size() - 1; i > pivot; i--)
    {
        if (arr[pivot] < arr[i])
        {
            swap(arr[pivot], arr[i]);
            break;
        }
    }
    
    reverse(arr.begin() + (pivot + 1), arr.end());
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

/*
Time Complexity: O(n)
Space Complexity: O(1) 
*/