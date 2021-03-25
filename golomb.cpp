//GOLOMB SEQUENCE USING DP

#include<bits/stdc++.h>
using namespace std;

int printGolomb(int n)
{
    int dp[n+1];

    dp[1] = 1;
    cout<<dp[1]<<"";

    for(int i =2; i<= n; i++)
    {
        dp[i] = 1 + dp[i - dp[dp[i-1]]];
        cout<<dp[i]<<"";
    }

    return dp[n];
}

int main()
{
    int n = 9;
 
    printGolomb(n);
    return 0;
}