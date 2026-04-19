// 167. Two Sum II - Input Array is Sorted.

#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:
        vector<int> twoSum2(vector<int> &numbers, int target)
        {
            vector<int> temp(2);
            temp = {-1,-1};

            int left = 0, right = numbers.size() - 1;
            while(left < right)
            {
                int sum = numbers[left] + numbers[right];

                if(sum == target)
                {
                    temp = {left + 1, right + 1};
                    return temp;
                }
                else if(sum > target)
                {
                    right--;
                }
                else
                {
                    left--;
                }
            }
            return temp;
        }
};

int main()
{
    Solution sol;
    
    vector<int> numbers = {2,7,11,15};
    int target = 9;

    vector<int> result = sol.twoSum2(numbers, target);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
