#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+1,0);
        for(auto& booking :bookings){
            int first=booking[0];
            int last = booking[1];
            int seat = booking[2];
            diff[first-1] +=seat;
            diff[last] -=seat;
        }
        int sum=0;

        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            sum+=diff[i];
            ans[i]=sum;
        }
        return ans;
    }
};