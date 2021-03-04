//TILES

#include<bits/stdc++.h>
using namespace std;

int getNoofWays(int num)
{
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;

    return getNoofWays(num - 1) + getNoofWays(num - 2);
}

int main()
{
    int n;
    cin>> n;
    cout<<getNoofWays(n);

    return 0;
}