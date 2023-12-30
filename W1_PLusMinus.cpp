#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    int pos=0,neg=0,zer=0;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        if(x==0) zer++;
        else if(x>0) pos++;
        else if(x<0) neg++;
    }
    printf("%lf\n", 1.0/n*pos);
    printf("%lf\n", 1.0/n*neg);
    printf("%lf\n", 1.0/n*zer);

    return 0;
}
