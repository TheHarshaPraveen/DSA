// 283. Move all Zeros to the end of the array

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        void moveZeros(vector<int> &nums)
        {
            if(nums.size() <= 1)
            {
                return;
            }

            int temp = 0, k = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] != 0)
                {
                    temp = nums[k];
                    nums[k] = nums[i];
                    nums[i] = temp;
                    k++;
                }
            }
        }
};

int main()
{
    Solution sol;
    vector<int> nums = {1,0,2,3,0,4,0,1}; 

    sol.moveZeros(nums);
    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}
