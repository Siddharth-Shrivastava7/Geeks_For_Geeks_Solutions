#include <iostream>

using namespace std;

int trap_water(int* p,int n)
{

    int* left_max = new int[n];
    int max_l= p[0];

    int* right_max = new int[n];
    int max_r = p[n-1];

    int trap = 0;

    for( int i=0;i<n;i++) 
    { 
        if(max_l <= p[i])
        {
            max_l = p[i];
            left_max[i]=max_l;
        }
        else 
        {
            left_max[i] = max_l;
        }
        
    }

    for( int i=n-1;i>=0;i--) 
    {     
        if(max_r <= p[i])
        {
            max_r = p[i];
            right_max[i]=max_r;
        }
        else 
        {
            right_max[i] = max_r;
        }
    
    }
     
    for( int i=0;i<n;i++) 
    {     
        trap += min( left_max[i], right_max[i]) - p[i]; 

    }
    return trap; 

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
    cout<<trap_water(p,n); 
    return 0;
    
}