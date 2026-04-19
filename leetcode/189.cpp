// 189. Rotate Array

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        void reverserange(vector<int> &nums, int start, int end)
        {
            int left = start;
            int right = end;
            int temp = 0;

            while(left < right)
            {   
                temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;

                left++;
                right--;
            }   
        }

        void rotate(vector<int> &nums, int k)
        {
            int n = nums.size();

            if(n == 0)
            {
                return;
            }

            k = k % n;
                
            int start = 0, end = n - 1;
            reverserange(nums, start, end);
    
            start = 0, end = k - 1;
            reverserange(nums, start, end);
    
            start = k, end = n - 1;
            reverserange(nums, start, end);
        }
};

int main()
{
    Solution sol;
    
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    sol.rotate(nums, k);

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
