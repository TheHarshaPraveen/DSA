// 1. Weird Algorithm

#include<iostream>
#include<vector>
using namespace std;

void weird(long long &n)
{
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }   
        else
        {
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
}

int main()
{
    long long n;
    cin >> n;
    
    cout << n << " ";
    if(n == 1)
        return 0;

    weird(n);
    
    cout << endl;
    return 0;
}
