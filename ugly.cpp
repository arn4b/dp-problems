//UGLY NUMBERS

#include <bits/stdc++.h>
using namespace std;

int getnthugly(int n)
{
    int ugly[n];
    int i2 = 0; int i3 = 0; int i5 = 0;
    int nmult2 = 2;
    int nmult3 = 3;
    int nmult5 = 5;

    int ugly_no = 1;

    ugly[0] = 1;

    for(int i = 1; i<n; i++) 
    {
        ugly_no = min(nmult2, min(nmult3, nmult5));

        ugly[i] = ugly_no;

        if(ugly_no == nmult2)
        {
            i2++;
            nmult2 = ugly[i2]*2;
        }
        if(ugly_no == nmult3)
        {
            i3++;
            nmult3 = ugly[i3]*3;
        }
        if(ugly_no == nmult5)
        {
            i5++;
            nmult5 = ugly[i5]*5;
        }
    }

    return ugly_no;
}

int main()
{
    int n;
    cin>>n;
    cout<<getnthugly(n);
    return 0;
}