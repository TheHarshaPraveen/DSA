// Reverse Words in a String

#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
        void reverseString(string &s, int l, int r)
        {
            int start = l, end = r;
            while(start < end)
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;

                start++;
                end--;
            }
        }
        string reverseWords(string &s)
        {
            int n = s.length();

            reverseString(s, 0, n - 1);
            int left = 0, right = 0, i = 0;
            while(i < n)
            {
                while(i < n && s[i] == ' ')
                {
                    i++;
                }

                if(i == n)
                    break;

                while(i < n && s[i] != ' ')
                {
                    s[right] = s[i];
                    right++;
                    i++;
                }

                reverseString(s, left, right - 1);
                s[right] = ' ';
                right++;

                left = right;
                i++;
            }
            s.resize(right - 1);
            return s;
        }
};

int main()
{
    Solution sol;
    
    string s = "  hello   world  ";
    cout << sol.reverseWords(s) << endl;

    return 0;
}
