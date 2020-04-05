#include <iostream> 

using namespace std; 

int get_sum(int* p, int l, int r)
{   
    if(l>0)
    {
        int res = p[r] - p[l-1];
    }
    else
    {
        int res = p[r];
    }

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
    int l=0,r=0;
    
    cout<<"Left_most index";
    cin>> l;
    cout<< "right_most index";
    cin>>r; 

    for(int i=0; i<n;i++)
    {
        if(i==0)
        {
            continue;
        }
        p[i] = p[i-1] + p[i]; 
    }

    cout<<"sum:"<<get_sum(p, l, r);
    return 0;  

}


