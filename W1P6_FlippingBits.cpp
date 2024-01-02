#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long flipbit(long n){
    long res=0;
    string str="00000000000000000000000000000000";
    int i=0;
    while(n>0){
        if(n%2==1) str[i]='1';
        n=n/2;
        i++;
    }

    //cout<<str<<"\n";
    for(int i=0,j=31;i<32;i++, j--){
        if(str[i]=='0'){
            res+= pow(2,i);
        }
    }

    return res;
}

int main(){
    int q;
    long n, res;
    char str[33], strflp[33];

    cin>>q;
    for(int i=0; i<q; i++){
        cin>>n;
        res=flipbit(n);
        cout<<res<<"\n";
    }
    return 0;
}
