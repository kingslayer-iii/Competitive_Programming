#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n=0;
    int count=0;
    cin >> n;

    for (int i=5; n/i > 0; i=i*5) {
        count = count + (n/i);
    }
    
    cout << count;
    return 0;
}