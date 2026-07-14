#include <bits/stdc++.h>
using namespace std;

int main() {

    string a;
    long long max=1;
    long long truemax=1;

    cin >> a;

    long long n = a.length();

    for (long long i=1; i<n; i++){

        if (a[i-1]==a[i]){
            max++;
        }
        if (truemax < max){
            truemax = max;
        }
        if (a[i-1]!=a[i]){
            max = 1;
        }
    }

    cout << truemax;
    return 0;
}