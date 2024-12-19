#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> findMajority(vector<int>& arr) 
{
    set<int> result;
    vector<int> res;
    
    int oneThird = arr.size() / 3;
    
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        
        if (count > oneThird)
        {
            result.insert(arr[i]);
        }
    }
    
    for (auto i : result)
    {
        res.push_back(i);
    }
    
    return res;
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
Time Complexity: O(n^2)
Space Complexity: O(1)
*/