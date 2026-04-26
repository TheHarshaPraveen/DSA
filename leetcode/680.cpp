// 680. Valid Palindrome II

#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
        bool isPalindrome(string &s, int left, int right)
        {
            while(left < right)
            {
                if(s[left] != s[right])
                {
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }
    
        bool validPalindrome(string &s)
        {
            int l = 0, r = s.length() - 1;
            while(l < r)
            {
                if(s[l] != s[r])
                {
                    return isPalindrome(s, l+1, r) || isPalindrome(s, l, r - 1);
                }
                l++;
                r--;
            }
            return true;
        }
};

int main()
{
    Solution sol;

    string s = "abca";
    if(sol.validPalindrome(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
