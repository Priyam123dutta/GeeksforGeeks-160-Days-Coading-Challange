// Moore's Voating Algorithm

#include <iostream>
#include <vector>

using namespace std;

vector<int> findMajority(vector<int>& arr) 
{
    int element1 = -1, element2 = -1, count1 = 0, count2 = 0, oneThird = arr.size() / 3;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (count1 == 0)
        {
            element1 = arr[i];
            count1++;
        }
        else if (element1 == arr[i])
        {
            count1++;
        }
        else if (count2 == 0)
        {
            element2 = arr[i];
            count2++;
        }
        else if (element2 == arr[i])
        {
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    
    vector<int> result;
    count1 = 0; count2 = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element1)
        {
            count1++;
        }
        if (arr[i] == element2)
        {
            count2++;
        }
    }
    
    if (count1 > oneThird)
    {
        result.push_back(element1);
    }
    
    if (count2 > oneThird && element1 != element2)
    {
        result.push_back(element2);
    }
    
    if (result.size() == 2 && result[0] > result[1])
    {
        swap(result[0], result[1]);
    }
    
    return result;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v, res;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    res = findMajority(v);
    
    cout << "The numbers are: " << res[0] << " and " << res[1];

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/