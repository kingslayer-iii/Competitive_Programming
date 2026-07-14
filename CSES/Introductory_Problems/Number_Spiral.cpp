#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t=0;
    cin >> t;

    for (long long i=0; i<t; i++){
        long long x=0;
        long long y=0;
        cin >> y >> x;

        long long maxx = max(x,y);
        long long minn = min(x,y);
        long long status = maxx%2;

        if(status==0){
            if(x>y){
                long long number=0;
                number = ((maxx-1)*(maxx-1))+minn;
                cout << number << '\n';
            }
            else {
                long long number=0;
                number = (maxx*maxx)-(minn-1);
                cout << number << '\n';
            }

        }
        else {
            if(x>y){
                long long number=0;
                number = (maxx*maxx)-(minn-1);
                cout << number << '\n';
            }
            else {
                long long number=0;
                number = ((maxx-1)*(maxx-1))+minn;
                cout << number << '\n';
            }

        }

    }

    return 0;
}