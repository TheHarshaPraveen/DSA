// 905. Sort Array By Parity

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> sortArrayByParity(vector<int> &nums)
        {
            int k = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] % 2 == 0)
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
    vector<int> nums = {3,1,2,4};

    vector<int> result = sol.sortArrayByParity(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " "; 
    }

    return 0;
}
