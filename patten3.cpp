/******************************************************************************
pattern :
    1 
    1 2 
    1 2 3 
    1 2 3 4
    1 2 3 4 5
    
*******************************************************************************/

#include <iostream>

using namespace std;

void pat(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<j<<" ";
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
