#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;

    cin>>n;
    int cnt[100]={0};

    for(int i=0; i<n; i++){
        cin>>x;
        cnt[x]++;
    }
    for(int i=0; i<100; i++){
        if(cnt[i]==1) cout<<i<<"\n";
    }
    return 0;
}
