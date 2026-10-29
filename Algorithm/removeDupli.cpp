#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int val:arr){
        if(st.find(val)!=st.end()){
            cout<<val<<" ";
            st.erase(val);
        }
    }
    return 0;  // 8
//4 2 4 1 2 7 1 9
}