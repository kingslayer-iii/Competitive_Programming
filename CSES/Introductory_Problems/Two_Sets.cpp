#include <bits/stdc++.h>
using namespace std;

long long set1[1000000];
long long set2[1000000];

int main() {
    long long n=0;
    long long sum=0;
    cin >> n;
    sum = ((n)*(n+1))/2;
    long long status = sum%2;
    if (status!=0){
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';

            long long y = sum/2;
            long long i=0;
            long long k=0;
            long long count1=0;
            long long count2=0;
            for (long long j=n; j>0; j--) {
                    if(j<y || j==1) {
                        set1[i]=j;
                        i++;
                        y = y-j;
                        count1++;
                    }
                    else {
                        set2[k]=j;
                        k++;
                        count2++;
                    }
            }
            cout << count1 << '\n';
            for (long long i=0; i<count1; i++) {
                cout << set1[i] << " ";
            }
            cout << '\n';
            cout << count2 << '\n';
            for (long long i=0; i<count2; i++) {
                cout << set2[i] << " ";
            }
            cout << '\n';
    }
    return 0;
}