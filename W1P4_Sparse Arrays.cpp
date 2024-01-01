#include <bits/stdc++.h>
#include <cstring>

using namespace std;


int main()
{
    int q, n;

    cin>>n;     // input the number of words
    char arr[n][22];    // array of string, then get input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>q;                 // input the number of words
    char qrr[q][22];        // array of query string
    int cnt[q]={0};         // an array to count the match
    for(int i=0; i<q; i++){
        cin>>qrr[i];
    }


    // looking for matching string
    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            //int res = strcmp(arr[j],qrr[i]);
            if(strcmp(arr[j],qrr[i])==0) cnt[i]++;
        }
    }

    // printing the result from count array
    for(int i=0; i<q; i++){
        cout<<cnt[i]<<"\n";
    }
    return 0;
}
