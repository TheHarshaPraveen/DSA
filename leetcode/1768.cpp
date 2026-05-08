// 1768. Merge Strings Alternately

#include<iostream>
#include<string>
using namespace std;

class Solution
{
    public:
        string mergeAlternately(const string &word1, const string &word2)
        {
            int m = word1.length(), n = word2.length();
            string merged(m+n, ' ');
            
            int i = 0, j = 0, k = 0;
            while(i < m && j < n)
            {
                merged[k] = word1[i];
                k++;
                merged[k] = word2[j];
                k++;

                i++;
                j++;
            }

            while(i < m)
            {
                merged[k++] = word1[i++];
            }
            
            while(j < n)
            {
                merged[k++] = word2[j++];
            }
            return merged;
        }
};

int main()
{
    Solution sol;
    string word1 = "ab";
    string word2 = "pqrs";

    string result = sol.mergeAlternately(word1, word2);
    cout << result << endl;

    return 0;
}
