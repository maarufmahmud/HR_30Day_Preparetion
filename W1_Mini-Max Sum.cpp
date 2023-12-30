#include <bits/stdc++.h>

using namespace std;

int main(){
    int max=INT32_MIN, min=INT32_MAX, sum=0;

    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];

        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];

        sum+=arr[i];

    }

    printf("%ld %ld\n", sum-max, sum-min);

    return 0;

}
