// 1. Two Sum

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            int n = nums.size();

            unordered_map<int, int> mp;

            for(int i = 0; i < n; i++)
            {
                int needed = target - nums[i];
                if(mp.find(needed) != mp.end())
                {
                    return {mp[needed], i};
                }
                mp[nums[i]] = i;
            }

            return {};
        }
};

int main()
{
    Solution sol;

    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
