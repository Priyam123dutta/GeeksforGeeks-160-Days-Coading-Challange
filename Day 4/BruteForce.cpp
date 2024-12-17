#include <iostream>
#include <vector>

using namespace std;

void rotateArr(vector<int>& arr, int d)
{
    vector<int> store;

    for (int i = d; i < arr.size(); i++)
    {
        store.push_back(arr[i]);
    }

    for (int i = 0; i < d; i++)
    {
        store.push_back(arr[i]);
    }

    arr = store;
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

    int d;
    cout << "Enter the d: ";
    cin >> d;

    rotateArr(v, d);

    cout << "The Rotated array is: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
