#include<iostream>

using namespace std;

void heapify_adjust(int arr[] , int n , int i)
{
int leftchild = 2*i+1;
int rightchild = 2*i+2;
int lindex = i;
if (leftchild < n && arr[leftchild] > arr[lindex])
lindex = leftchild;
if (rightchild < n && arr[rightchild] > arr[lindex])
lindex = rightchild;
int temp;
if(lindex!=i)
{
temp =arr[i];
arr[i] = arr[lindex];
arr[lindex] = temp;
heapify_adjust(arr,n,lindex);
}
}
void buildmaxheap(int arr[],int n)
{
int i;
for(i =(n/2)-1;i>=0;i--)
heapify_adjust(arr,n, i);
for(i = n-1;i>=0;i--) 
{
int temp;
temp = arr[0];
arr[0] = arr[i];
arr[i] = temp;
heapify_adjust(arr ,i,0);
}
}


int main()
{
cout<<"enter the no of elements of heap";
int n;
cin>>n;
cout<<"enter elements of heap";
int arr[n];
int i;
for(i=0;i<n;i++)
cin>>arr[i];

buildmaxheap(arr,n);

cout<<"the sorted heap is:";
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
