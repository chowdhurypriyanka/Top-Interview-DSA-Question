#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>ans(n+1,0);
        int highAlt=INT_MIN;
        for(int i=0;i<n;i++){
            ans[i+1]=ans[i]+gain[i];
            highAlt=max(highAlt,ans[i]);
        }
        highAlt=max(highAlt,ans[n]);
        return highAlt;
    }
};