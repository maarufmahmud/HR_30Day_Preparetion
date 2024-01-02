#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n][n];

    //input the array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //Calulating the diagonal sum
    long sum1=0, sum2=0;
    for(int i=0; i<n; i++){
        sum1+= arr[i][i];
        sum2+= arr[i][n-i-1];
    }

    //printing the result
    printf("%ld\n", abs(sum1-sum2));

    return 0;
}
