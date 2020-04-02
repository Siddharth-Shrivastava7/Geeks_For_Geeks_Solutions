#include <iostream> 

using namespace std; 


// int* reverse( int* r ,int size)

// {
//     int* s = new int[size];

//     for(int i=0; i<size; i++)
//     {
//         s[i] = r[size-1-i]; 
//     }

//     return s;

// }


int* reverse (int* p, int n)
{
    int low = 0; 
    int high = n-1; 

    while(low < high)
    {
        swap(p[low],p[high]); 
        low++; 
        high--;
    }
    return p;
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
    
    cout<<"reversed_array:"; 
    
    p = reverse(p,n);
    
    // for(int j=0; j<n; j++)
    // {
    //     cout<<p[n-1-j]<<endl;
    // } 

    for(int i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }

    return 0;
    
}