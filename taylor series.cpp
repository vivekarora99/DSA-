#include<iostream>
#include<cmath>
using namespace std;
int fact(int a)
{   int i,factorial=1;
if(a==0)
    return 1;
else
{
    for(i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

}
int main()
{
    int i,x;
    cin>>x;//2
    float sum=0;
    for(i=0;i<=x;i++)
    {
        sum=sum+(pow(x,i)/fact(i));

    }
    cout<<sum;
    return 0;

}
