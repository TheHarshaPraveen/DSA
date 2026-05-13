// Concatenate Array With Reverse

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> concatWithReverse(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(2*n);
            int m = ans.size();

            for(int i = 0; i < n; i++)
            {
                ans[i] = nums[i];
                ans[m - i - 1] = nums[i];
            }
            return ans;
        }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,3};

    vector<int> result = sol.concatWithReverse(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
