/******************************************************************************
pattern :2
    * 
    * * 
    * * * 
    * * * *
    * * * * *
    
*******************************************************************************/
#include <iostream>

using namespace std;

void pat(int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int n;
   cin>>n;
   pat(n);
    return 0;
}
