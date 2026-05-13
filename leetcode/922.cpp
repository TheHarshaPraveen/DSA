// Sort Array By Parity II

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> sortArrayByParityII(vector<int> &nums)
        {
            int n = nums.size();
            int i = 0, j = 1;
            while(i < n && j < n)
            {
                if(nums[i] % 2 == 0)
                {
                    i+=2;
                }
                else if(nums[i] % 2 != 0)
                {
                    j+=2;
                }
                else
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    i+=2;
                    j+=2;
                }
            }
            return nums;
        }
};

int main()
{
    Solution sol;
    vector<int> nums = {4,2,5,7};

    vector<int> result = sol.sortArrayByParityII(nums);
    for(int i : result)
    {
        cout << i << " ";
    }

    return 0;
}
