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

//CATALAN USING BINOMIAL

#include<bits/stdc++.h>
using namespace std;

int binomial(int n, int k)
{
    if(k>n-k)
        k = n-k;
    
    int res = 1;
    
    for(int i =0; i< k; i++)
    {
        res *= (n-i);
        res /= (i+1);
    }
    
    return res;
}

int catalan(int n)
{
    int c = binomial(2*n, n);
    
    return c/(1+n);
}

int main()
{
    int num;
    cin>>num;
    cout<<catalan(num);

return 0;
}
