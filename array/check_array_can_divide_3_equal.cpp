#include <iostream> 

using namespace std; 

bool arr_divide(int* p, int n)
{
    int count = 0; 
    for( int i= 0; i<n; i++)
    {
        p[i] += p[i-1];
    }
    
    if(p[n-1] % 3 == 0)

    {
        int a = p[n-1] / 3;
        for(int i=0; i<n; i++)
        {
            if( a == p[i])
            {
                count++;
            }
            if (2 *a == p[i])
            {   
                count++;
            }

        }
        if(count == 2)
        {
            return true; 
        }
        return false; 
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
    cout<<arr_divide(p,n);
}