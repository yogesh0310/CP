#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,min=9999,max=0;
	cout<<"Enter size of array";
	cin>>n;
	int arr[n];
//	cout<<"Enter elements in array";
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%100+1;
	}
	for(int i=0;i<n;i++)
	{
		if (arr[i]>max) max=arr[i];
		if (arr[i] < min) min=arr[i];
	}
	cout<<"Minimum is: "<<min;
	cout<<"\nMaximum is: "<<max;
	return 0;
}
