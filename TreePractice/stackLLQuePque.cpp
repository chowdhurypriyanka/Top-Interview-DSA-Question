#include <iostream>
#include <list>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // stack creation
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        int num = st.top();
        cout << num << " ";
        st.pop();
    }
    // linkedList creation
       cin >> n;
    list<int> lt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lt.push_back(x);
    }
   
   for(int val:lt){
    cout<<val<<" ";
   }
   // queue creation
      cin >> n;
   queue<int>q;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    q.push(x);
   }
   while(!q.empty()){
    int num = q.front();
    cout<<num<<" ";
    q.pop();
   }
   return 0;
}