#include <bits/stdc++.h>

using namespace std;
int main()
{
    long n, x;
    long arr[101]={0};

    cin>>n;

    //getting the input array & performing the count
    for(long i=0; i<n; i++){
        cin>>x;
        arr[x]++;
    }

    // printing the result
    for(long i=0; i<100; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
