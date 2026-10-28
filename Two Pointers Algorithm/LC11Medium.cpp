#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0, i = 0, j = n - 1;
        while (i < j) {
            int length = j-i;
            int hgt = min(height[i],height[j]);
            maxArea = max(maxArea,length*hgt);
            if(height[i]<=height[j])i++;
            else j--;
        }
        return maxArea;
    }
};