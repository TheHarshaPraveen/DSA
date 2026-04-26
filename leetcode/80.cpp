// 80. Remove Duplicates from Sorted Array II

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int k = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(k == 0 || k == 1 || nums[k-2] != nums[i])
                {
                    nums[k] = nums[i];
                    k++;
                }
            }
            return k;
        }
};

int main()
{
    Solution sol;

    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int k = sol.removeDuplicates(nums);
    
    cout << k << endl;
    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
