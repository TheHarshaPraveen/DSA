// 1662. Check If Two String Arrays are Equivalent

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
        bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
        {
            int i = 0, j = 0, l = 0, r = 0;
            while(i < word1.size() && j < word2.size())
            {
                if(word1[i][l] != word2[j][r])
                {
                    return false;
                }
                l++;
                r++;

                if(l == word1[i].length())
                {
                    i++;
                    l = 0;
                }

                if(r == word2[j].length())
                {
                    j++;
                    r = 0;
                }
            }
            return i == word1.size() && j == word2.size();
        }
};

int main()
{
    Solution sol;
    
    vector<string> word1 = {"ac", "b"};
    vector<string> word2 = {"ab", "c"};

    if(sol.arrayStringsAreEqual(word1, word2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
