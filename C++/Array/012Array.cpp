#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter how many elements are there in array";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in the array.(Elements should be 0,1,2).";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
