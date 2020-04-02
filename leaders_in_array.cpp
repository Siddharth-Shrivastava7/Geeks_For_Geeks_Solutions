#include <iostream> 
#include <bits/stdc++.h>

using namespace std; 



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

    stack <int> s; 
    int best_max = p[n-1];
    s.push(p[n-1]);
     
    // O(n) time complexity.. not require for O(n^2)

    for(int i=n-1; i>0; i--)
    { 
        if ( p[i] > best_max)
        {
            s.push(p[i]);
            best_max = p[i];
        }           
    }

    cout<<"leading elements";
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}