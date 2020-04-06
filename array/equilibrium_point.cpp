#include <iostream> 

using namespace std; 

bool equli(int* p, int n)
{   
    int total_sum =0;

    // total sum calculated so as to not calc suffix sum and save O(n) space complexity 
    for( int i=0; i<n;i++)
    {
        total_sum += p[i];
    }

    // O(1) auxiliary space complexity 
    int right_sum = total_sum;
    int left_sum = p[0];
    // prefix sum and check suffix sum (in a way) to get equilibrum point
    for(int i=0; i<n;i++)
    {   

        if(i==0)
        {   
            if( right_sum == left_sum)
            {
                return true;
            }
        }

        else
        { 
            left_sum += p[i];
            right_sum -= p[i-1];
            if ( right_sum == left_sum)
            {
                return true; 
            } 
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

    cout<<equli(p,n);

}
    

