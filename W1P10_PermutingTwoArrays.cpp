#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, n, k;
    cin>>q;
    while(q--){
        cin>>n>>k;
        int A[n], B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }

        sort(A,A+n);
        sort(B,B+n,greater<int>());
        bool z = false;
        for(int i=0;i<n;i++){
            if(A[i]+B[i]<k){
                z = true;
                break;
            }
        }
        if(z) cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}
