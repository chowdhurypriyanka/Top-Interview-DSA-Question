#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0,j=nums.size()-1,cnt=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==k){
                i++;j--;cnt++;
            }else if(sum<k)i++;
            else j--;
        }
        return cnt;
    }
};