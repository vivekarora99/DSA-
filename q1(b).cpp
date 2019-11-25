#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the size of array whose maximum of entered elememnts is to be found";
    cin>>N;
	int arr[N];
	int i;
	cout<<"Enter the elements of array";
	for(i=0;i<N;i++)
	{
	   	cin>>arr[i];
	}
	int max=0;
	for(i=0;i<N;i++)
	{
	   	if(arr[i]>max)
	   	{
	   		max=arr[i];
		}	
    }
	cout<<endl<<"Max of entered elements is "<<max;
	return 0;
}
