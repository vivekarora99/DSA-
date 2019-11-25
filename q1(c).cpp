#include<iostream>
using namespace std;
int main()
{
	int N,i,count=0;
	cout<<"Enter the size of array";
	cin>>N;
	int arr[N];
	cout<<"Enter elements in array";
	for(i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	cout<<"Enter the element you want to search";
	int wanted;
	cin>>wanted;
	for(i=0;i<N;i++)
	{
		if(wanted==arr[i])
		{
			count++;
			cout<<"Found at"<<i<"location";
		}
		}
		if(count==0)
		{
			cout<<"Element not found";
		}
    return 0;
}
