#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1]; //[1,3,7,12]
        }
        vector<int>ans;
        for(int q:queries){
            int len = upper_bound(nums.begin(),nums.end(),q)-nums.begin();
            ans.push_back(len);
        }
        return ans;
    }
};