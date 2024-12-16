#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void pushZerosToEnd(vector<int>& arr) 
{
    stable_partition(arr.begin(), arr.end(), 
    [](int n)
    {
        return n != 0;
    }
    );
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