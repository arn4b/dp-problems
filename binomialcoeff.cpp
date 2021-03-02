//BINOMIAL COEFFICIENTS

#include<bits/stdc++.h>
using namespace std;

int binomial(int n, int k){
    int C[n+1][k+1];

    for(int i=0; i<=n; i++)
    {
        for(int j =0; j<=min(i, k); j++)
        {
            if(j==0 || j==i)
                C[i][j] = 1;

            else 
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }

    return C[n][k];
}

int main()
{
    int n1, k1;

    cin>>n1>>k1;

    cout<<binomial(n1, k1);

    return 0;
}