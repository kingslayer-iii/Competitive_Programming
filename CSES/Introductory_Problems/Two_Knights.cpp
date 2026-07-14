#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n=0;
    cin >> n;

    for (long long i=1; i<n+1; i++){
        long long k=0;
        k = ((((i*i)*((i*i)-1))/2) - (4*(i-1)*(i-2)));
        cout << k << '\n';
    }
    return 0;
}