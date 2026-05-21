// Reverse Words in a String III

#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
        string reverseWords(string &s)
        {
            int n = s.length();
            int i = 0, j = 0;

            while(i < n)
            {
                if(s[i] == ' ' || i == n - 1)
                {
                    int l = j, r = i - 1;
                    if(i == n - 1)
                    {
                        r = i;
                    }

                    while(l < r)
                    {
                        char temp = s[l];
                        s[l] = s[r];
                        s[r] = temp;
                        l++;
                        r--;
                    }

                    j = i + 1;
                }
                i++;
            }
            return s;
        }
};

int main()
{   
    Solution sol;
    string s = "Let's take LeetCode contest";

    cout << sol.reverseWords(s) << endl;

    return 0;
}
