#include<iostream>
using namespace std;
int main()
{
    int ans=1,i,b,e;
    cin>>b>>e;
    for(i=1;i<=e;i++)
    {
        ans=ans*b;
    }
    cout<<"power="<<ans;
    return 0;
}
