#include<iostream>

using namespace std;

int partition(int arr[],int p,int q)
{
int x;
x=arr[p];
int i,j;
i=p;
int temp;
for(j=p+1;j<=q;j++)
{
if(arr[j]<x)
{
i++;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
temp=arr[p];
arr[p]=arr[i];
arr[i]=temp;
return i;
}

void quicksort(int arr[],int i,int j)
{
int k;
if(i<j)
{
k=partition(arr,i,j);
quicksort(arr,i,k-1);
quicksort(arr,k+1,j);
}
}
int main()
{
cout<<"enter no of  elements in array"<<endl;
int n;
cin>>n;
cout<<"enter elements of array"<<endl;
int arr[n];
int i;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
quicksort(arr,0,n-1);
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
}
