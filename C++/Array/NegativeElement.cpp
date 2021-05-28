#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number of elements in the array";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in the array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k=0;
	int temp;
	cout<<"\nGiven array is:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	for(int i=0;i<n;i++)
	{
		k=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[k] < arr[j])
			{
				k++;
			}
			else
			{
				temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nNow array is:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
