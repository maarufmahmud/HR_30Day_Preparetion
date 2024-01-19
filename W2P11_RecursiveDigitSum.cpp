#include <bits/stdc++.h>

using namespace std;

int superDigit(long long x){
    if(x < 10) return x;
    int newX = 0;
    while(x){
        newX += x % 10;
        x /= 10;
    }
    return superDigit(newX);
}


int main() {
    string n; int k; long long p = 0;
    cin>>n>>k;
    for(int i=0; i<n.size(); i++){
        p += n[i] - '0';
    }
    p *= k;
    cout<<superDigit(p)<<endl;
    return 0;
}
