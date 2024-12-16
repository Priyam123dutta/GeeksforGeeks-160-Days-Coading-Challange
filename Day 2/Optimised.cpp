#include <iostream>
#include <vector>

using namespace std;

void pushZerosToEnd(vector<int>& arr) 
{
    int count = 0;
        
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[count], arr[i]);
            count++;
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

    pushZerosToEnd(v);

    cout << "The answer is: ";
    
    for (int i : v)
    {
        cout << i << " ";
    }
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/