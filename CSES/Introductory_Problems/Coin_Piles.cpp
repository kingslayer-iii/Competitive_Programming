#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        long long a=0, b=0;
        cin >> a >> b; 
        long long sum = a+b;

        if (sum%3!=0){
            cout << "NO" << '\n';
        }
        else {
            long long maxx, minn;
            maxx = max (a,b);
            minn = min (a,b);

            if (maxx > 2*minn){
                cout << "NO" << '\n';
            }
            else {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}