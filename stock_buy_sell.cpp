#include <iostream>


using namespace std; 


int profit_max(int* p,int n)
{
    int local_max= 0; 
    int local_min = 0; 
    int profit = 0;
    int cmin =0, cmax=0;
    for( int i= 0; i<n; i++)
    {    
        if(i==0 && p[0]<p[1]) // cornor case
        {
            local_min= p[0];
            cmin++;
            continue;
        }
        
        else if(i==n-1 && p[n-1]>p[n-2]) // cornor case 
        {
            local_max = p[n-1];
            cmax++;
        }

        else if ( i>0 && i<n-1 )
        {
            if( p[i] > p[i-1] && p[i]> p[i+1]) 
            {
                local_max = p[i];
                cmax++;
            }
            
            else if ( p[i] < p[i-1] && p[i] < p[i+1])
            {
                local_min = p[i];
                cmin++;
            }  

            else
            {
                continue;
            }      
        }
        else   
        {
            continue;
        }

        cout<<"max";
        cout<<local_max<<endl;
        cout<<"min";
        cout<<local_min<<endl;

        if(cmin==cmax)
        {
            profit += (local_max - local_min) ;
        }
        
    }

    return profit;

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

    cout<<profit_max(p,n);
    return 0; 
}