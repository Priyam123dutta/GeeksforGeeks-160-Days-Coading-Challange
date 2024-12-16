#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int> &arr)
{
    // continued...
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