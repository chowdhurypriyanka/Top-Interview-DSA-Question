#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    // arr = {0, 1, 0, 4, 2, 14, 5, 1, 4};
    map<int, int> mp;
    for (int val : arr)
    {
        mp[val]++;
    }
    vector<int> ans;
    for (auto p : mp)
    {
        if (p.second > 1)
        {
            for (int i = 0; i < p.second; i++)
            {
                ans.push_back(p.first);
            }
        }
    }
    for (int x : arr)
    {
        if (mp[x] == 1)
        {
            ans.push_back(x);
        }
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}