#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool subarr0(int* p, int n)
{   
    unordered_set<int> check; 
    // prefix sum
    for( int i=0; i<n; i++)
    {
        check.insert(p[i]); 
        if (i==0)
        {
            continue;
        }
        p[i] += p[i-1];
        // either prefix sum = 0 or there is a number which repeats itself (atleast once)
        if (p[i] == 0 || check.find(p[i]) != check.end())
        {
            return true;
        }
    }
    return false;
}


int main()
{
    cout<<"size of array:";
    int n; 
    cin>>n; 
    int* p = new int[n]; 
    cout<<"array elements:";
    for( int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<subarr0(p,n);
    return 0;
}    