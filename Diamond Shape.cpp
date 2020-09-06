#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=n+1-i && j<=n-1+i )
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            if(j>=i && j<=n+n-i )
            {
                cout<<" *";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
   return 0;
}

Output-
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
