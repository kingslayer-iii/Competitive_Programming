#include <bits/stdc++.h>
using namespace std;

int arr0[1000000] = {0};

int main() {

    string word;
    int n=0;
    cin >> word;
    n = word.length();
    int freq[26]={0};
    int a = 'A' ;

    for (int i=0; i<26; i++){

        for (int j=0; j<n; j++){
            if (word[j]==a+i) {
                freq [i]++;
            }
        }
    }

    int count2=0;

    for (int i=0; i<26; i++) {

        if (freq[i]%2 != 0){
            count2++;
        }
    }

    if (count2 > 1) {
        cout << "NO SOLUTION";
    }

    else {

    if (count2==0) {
        int pos=0;
            for (int j=0; j<26; j++){
                for (int k=0; k<freq[j]/2; k++) {
                    arr0[pos] = a+j;
                    arr0[n-1-pos]= a+j;
                    pos++;
                } 
            }
    }

    else if (count2==1) {
        int pos=0;
        for (int j=0; j<26; j++){
            for (int k=0; k<freq[j]/2; k++) {
                arr0[pos] = a+j;
                arr0[n-1-pos]= a+j;
                pos++;
            } 
        }

        for (int j=0; j<26; j++) {
            if (freq[j]%2!=0) {
                arr0[n/2]=a+j;
                break;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << (char)arr0[i] ;
    }
    
    }

    return 0;
}