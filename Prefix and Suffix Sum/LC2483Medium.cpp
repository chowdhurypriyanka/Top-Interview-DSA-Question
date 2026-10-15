#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>preN(n+1,0);
        vector<int>suffY(n+1,0);
        for(int i=0;i<n;i++){
            preN[i+1]=preN[i]+((customers[i]=='N')?1:0);
        }
        for(int i=n-1;i>=0;i--){
            suffY[i]=suffY[i+1]+((customers[i]=='Y')?1:0);
        }
        int minpen = n;
        for(int i=0;i<=n;i++){
            preN[i]+=suffY[i];
            minpen=min(minpen,preN[i]);
        }
        for(int i=0;i<=n;i++){
            if(minpen==preN[i]) return i;
        }
        return n;
    }
};