// Jugggling Algorithm

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateArr(vector<int>& arr, int d)
{
    int n = arr.size();
        
    d %= n;
    
    int cycles = __gcd(n, d);
    
    for (int i = 0; i < cycles; i++)
    {
        int startElement = arr[i];
        
        int currentIndex = i, nextIndex;
        
        while (true)
        {
            nextIndex = (currentIndex + d) % n;
            
            if (nextIndex == i)
            {
                break;
            }
            
            arr[currentIndex] = arr[nextIndex];
            
            currentIndex = nextIndex;
        }
        
        arr[currentIndex] = startElement;
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

/*
Time Complexity: O(n)
Space Complexity: O(1) 
*/