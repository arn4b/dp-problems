#include<bits/stdc++.h>
using namespace std;


float randomizer(int n)
{

    srand(time(0));
    int nc = 0; int nt = 0;
    for (int i = 0; i < n; i++)
    {
        double x = ((double) rand() / (RAND_MAX));
        double y = ((double) rand() / (RAND_MAX));

        double dst = x*x + y*y;

        if(dst <= 1)
           { nc+= 1;}
        nt+= 1;

    }
    
    return 4 * (double)nc/nt;
    
    
}

int main()
{
    int n;
    cin>>n;

    cout<<randomizer(n);

    return 0;

}