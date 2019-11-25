#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int wanted)
{
   int count=0;
   for(int i=0; i<n; i++)
   {
     if(arr[i]==wanted)
      {
      cout<<i<<" "; count++;
      }
   }
    if(count==0)
    {
     cout<<"Element not found"; 
    }
    return;
}
int main()
{
   int n,wanted;
   cin>>n;
   int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
   cin>>wanted; 
   linearsearch(arr,n,wanted);
 return 0;
}
