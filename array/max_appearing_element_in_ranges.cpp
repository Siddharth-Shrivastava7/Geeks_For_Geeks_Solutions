#include <iostream> 

using namespace std; 

// using prefix sum & assuming the max range to be 1000
// max no of appearing element in all ranges should be the cornor element only, thus using this trick

int max_element(int* l,int* r, int n)
{
    int a[1000] = {0}; 
    for(int i=0; i<n; i++)
    {
        a[l[i]]++;  
        a[r[i] + 1]--; // sustracting elements that are out of range  
    }
   
    int max =a[0], res =0; 
    for(int i=1; i<1000; i++)
    {
        a[i] += a[i-1]; // prefix sum   
        if( max < a[i])
        {
            max  = a[i];
            res = i;
        }
    }
    return res;
}


int main()
{
    cout<<"no of ranges";
    int n; 
    cin>>n; 
    int* l = new int[n];
    int* r = new int[n]; 
    cout<<"left bounded ranges";
    for( int i=0; i<n; i++)
    {
        cin>>l[i];
    }
    cout<<"right bounded ranges";
    for( int i=0; i<n; i++)
    {
        cin>>r[i];
    }
    cout<<max_element(l,r,n);

}