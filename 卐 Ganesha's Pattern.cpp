#include<iostream>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int hn = (n+1)/2;
    for (long long int i=1;i<=n;i++)
    {
        for(long long int j=1;j<=n;j++)
        {
            if(i==hn || j==hn || (i==1&&j>hn)||(i<hn && j==1)||(i==n&&j<hn)||(i>hn&&j==n))cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
  return 0;
}
