// 977. Squares of a sorted array

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            int n = nums.size();
            
            vector<int> temp(n);
            int left = 0, right = n - 1, i = n - 1;

            while(left <= right)
            {
                int leftsq = nums[left] * nums[left];
                int rightsq = nums[right] * nums[right];

                if(leftsq < rightsq)
                {
                    temp[i] = rightsq;
                    right--;
                }
                else
                {
                    temp[i] = leftsq;
                    left++;
                }
                i--;
            }

            return temp;
        }
};

int main()
{
    Solution sol;

    vector<int> nums = {-4,-1,0,3,10};

    vector<int> result = sol.sortedSquares(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
