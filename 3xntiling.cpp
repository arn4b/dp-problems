//3xn TILING

#include<bits/stdc++.h>
using namespace std;


int tiling(int n)
{
    int A[n+1], B[n+1];

    A[0] = 1, A[1] = 0, B[0] = 0, B[1] = 1;

    for(int i = 2; i <=n; i++)
    {
        A[i] = A[i-2] + 2*B[i-1];
        B[i] = A[i-1] + B[i-2];
    }

    return A[n];
}

int main()
{
    int num; 
    cin>> num;

    cout<<tiling(num);

    return 0;
}