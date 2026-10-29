#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    cin >> m;
    vector<int> brr;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        brr.push_back(x);
    }
    set<int> st;
    for (int val : arr)
    {
        st.insert(val);
    }
  
    for (int val : brr)
    {
        if (st.find(val) != st.end())
        {
             cout << val << " ";
            st.erase(val);
        }
    }
    
    return 0;
}
/* 6
5 2 8 2 1 6
5
2 6 6 9 5 */