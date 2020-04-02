#include <iostream> 

using namespace std; 


int* rotate(int* p, int n, int d)
{
    int* q = new int[n]; 

    for(int i= 0; i<d; i++)
    {
        int a = p[0];
        for(int j=0; j<n; j++)
        {
            if ( j== n-1)
            {
                p[n-1] = a;
            }
            else
            {
                p[j] = p[j+1];
            }
             
        }
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
    cout<<"Rotate_num:";
    int d;
    cin>>d;
    int* q = rotate(p,n,d); 
    for( int i=0; i<n; i++)
    {
        cout<<q[i]<<endl;
    }

} 