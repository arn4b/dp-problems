//CATALAN NUMBERS

#include<bits/stdc++.h>
using namespace std;

unsigned long int catalan(unsigned int n)
{
    unsigned long int catalan[n+1];

    catalan[0]=catalan[1]=1;

    for(int i = 2; i<=n; i++)
    {
        catalan[i] = 0;
        for(int j = 0; j<i; j++)
        {
            catalan[i] += catalan[j] *catalan[i-j-1];
        }

    }

    return catalan[n];
}

int main()
{
    int num;
    cin>>num;
    cout<<catalan(num);

return 0;
}