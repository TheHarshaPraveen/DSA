// 344. Reverse String

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        void reverseString(vector<char> &s)
        {
            int left, right;
            left = 0, right = s.size() - 1;

            while(left < right)
            {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;

                left++;
                right--;
            }
        }
};

int main()
{
    Solution sol;
    vector<char> s = {'H','a','r','s','h','a'};

    sol.reverseString(s);
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}
