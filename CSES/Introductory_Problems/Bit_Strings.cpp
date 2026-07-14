#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n = 0;
    long long bit = 1;
    long long mod = 1;

    for (int i = 0; i < 9; i++)
    {
        mod = 10 * mod;
    }

    mod = mod + 7;

    cin >> n;

    for (unsigned long long i = 1; i < n + 1; i++)
    {
        bit = 2 * bit;
        bit = bit % mod;
    
    }

    cout << bit;

    return 0;
}