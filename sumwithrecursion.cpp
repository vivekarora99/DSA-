#include<iostream>
using namespace std;
int sum(int x)
{   if(x!=0)
    return x+sum(x-1);
    else
    return 0;


}
int main()
{   int  n,ans=0;
    cin>>n;
    int answer;
    answer=sum(n);
    cout<<"sum="<<answer;
    return 0;
}
