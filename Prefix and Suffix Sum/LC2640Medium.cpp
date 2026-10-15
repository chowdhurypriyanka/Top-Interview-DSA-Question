#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans;
        int max_score=INT_MIN;
        long long score=0;
        for(int i=0;i<nums.size();i++){
               max_score=max(max_score,nums[i]);
               int convert = max_score+(long long)nums[i];
               score+=convert;
               ans.push_back(score);
        }
        return ans;
    }
};