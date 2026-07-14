#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int x;
    int y = 0;

    cin >> n;

    for (int i=1; i<n+1; i++){
        y = y + i;
    }

    for (int i=1; i<n; i++) {
        cin >> x;
        y = y-x;
    }

    cout << y;
    return 0;
}