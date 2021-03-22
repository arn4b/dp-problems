//CUTTING A ROD DYNAMIC

#include<bits\stdc++.h>
using namespace std;

int cutRod(int arr[], int n)
{
    int val[n+1];
    val[0] = 0;


    for(int i = 1; i <= n; i++)
    {
        int maxval = INT_MIN;
        for(int j = 0; j < i; j++)
        {
            maxval = max(maxval, arr[j] + val[i-j-1]);
        }

        val[i] = maxval;
    }

    return val[n];
}

int main()
{
    int arr[] = {3 ,  5 ,  8 ,  9,  10,  17 , 17,  20}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<cutRod(arr, size);

    return 0;
}