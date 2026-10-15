#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pre(n);
        int prod = nums[0];
        pre[0] = 1;
        /*pre[i] stores the product of all elements to the left of index i.
                    For nums = [1, 2, 3, 4]:
                        pre = [1, 1, 2, 6]*/
        for (int i = 1; i < n; i++)
        {
            pre[i] = prod;
            prod *= nums[i]; 
        }
        prod = nums[n - 1]; 
        for (int i = n - 2; i >= 0; i--)
        {
            pre[i] = pre[i] * prod;
            prod *= nums[i];
        }
        /*Traverse from right to left. prod stores the product of elements to the right of the current index. Multiply it with the prefix product to get the answer.
               Final result:
                           ans = [24, 12, 8, 6]
                           For example, at index 2:
                           - Prefix product = 1 × 2 = 2
                           - Suffix product = 4
                           - Answer = 2 × 4 = 8*/
        return pre;
    }
};
