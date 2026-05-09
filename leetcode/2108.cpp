// Find First Palindromic String in the Array

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
    public:
        bool isPalindrome(string &str)
        {
            int l = 0, r = str.length() - 1;
            while(l < r)
            {
                if(str[l] != str[r])
                {
                    return false;
                }
                l++;
                r--;
            }
            return true;
        }
        string firstPalindrome(vector<string> &words)
        {
            for(int i = 0; i < words.size(); i++)
            {
                if(isPalindrome(words[i]))
                {
                    return words[i];
                }
            }
            return "";
        }
};

int main()
{
    Solution sol;
    vector<string> words = {"abc","car","ada","racecar","cool"};

    string result = sol.firstPalindrome(words);
    cout << result << endl;

    return 0;
}
