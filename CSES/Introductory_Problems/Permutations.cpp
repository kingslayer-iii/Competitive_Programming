#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    int x=0;

    cin >> n;

    int arr[n];

    if (n==2 || n==3 ){
        cout << "NO SOLUTION";
    }
    else {
    for (int i=0; i<n; i++){
        arr[i]=i+1;
    }
    x = n%2;
    if (x==0){
        for (int i=1; i<n; i=i+2){
            cout << arr[i] << " ";
        }
        for (int i=0; i<n; i=i+2){
            cout << arr[i] << " ";
        }
    }
    else {
        for (int i=1; i<n; i=i+2){
            cout << arr[i] << " ";
        }
        for (int i=0; i<n; i=i+2){
            cout << arr[i] << " ";
        }
    }
    }
    return 0;
}