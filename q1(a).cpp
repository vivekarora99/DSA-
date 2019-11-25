#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the size of array whose sum is to be found";
    cin>>N;
	int arr[N];
	int i;
	cout<<"Enter the elements of array";
	for(i=0;i<N;i++)
	{
	   	cin>>arr[i];
	}
	int sum=0;
	for(i=0;i<N;i++)
	{
	   	sum=sum+arr[i];
	}
	cout<<endl<<"Sum of entered elements is "<<sum;
	return 0;
}
