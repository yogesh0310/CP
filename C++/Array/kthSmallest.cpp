//Not done completely;
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int kthSmallest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return arr[k-1];
}
int main()
{
	int n,k;
//	cout<<"Enter how many elements are there in array";
//	cin>>n;
	int arr[]={7,10,4,3,20,15};
//	cout<<"Enter elements in the array";
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];
//	}
	
	cout<<"Enter kth element to find from array";
	cin>>k;
	int element=kthSmallest(arr,6,k);
	cout<<element;
}
