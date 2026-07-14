#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n=0;
    long long moves=0;
    cin >> n;

    long long arr[n];

    for (long long i=0; i<n; i++){

        cin >> arr[i];
    }

    for (long long i=0; i<n-1; i++){
        long long temp = 0;
        if(arr[i+1]<arr[i]){
            temp = arr[i]-arr[i+1];
            moves = moves + temp;
            arr[i+1]=arr[i];
        }
    }

    cout << moves;

    return 0;
}