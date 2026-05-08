// 2460. Apply Operations to an Array

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> applyOperations(vector<int> &nums)
        {
            for(int i = 0; i < nums.size() - 1; i++)
            {
                if(nums[i] == nums[i+1])
                {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }

            int k = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] != 0)
                {
                    int temp = nums[k];
                    nums[k] = nums[i];
                    nums[i] = temp;
                    k++;
                }
            }
            return nums;
        }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,2,2,1,1,0};

    vector<int> result = sol.applyOperations(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
