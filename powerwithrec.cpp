#include<iostream>
using namespace std;
int mypower(int b,int e)//2 3
{
    if(e!=0)
    {
    return b*mypower(b,e-1);
    }
    else
        return 1;

}
int main()
{  int b,e,ans;
   cin>>b>>e;
   ans=mypower(b,e);
   cout<<ans;
}
