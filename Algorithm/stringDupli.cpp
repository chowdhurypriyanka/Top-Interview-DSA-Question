#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(char ch:s){
        mp[ch]++;
    }
    for(char ch:s){
        if(mp[ch]==1){
            cout<<ch;
            break;
        }
    }
}