#include<iostream>
using namespace std;

void merge(int a[] , int i,int i1,int j,int j1)
{
int f;
f=i;
int temp[50];
int k=0;
while(i<=i1 && j<=j1)
{
if(a[i]<a[j])
{
temp[k]=a[i];
i++;
k++;
}
else
{
temp[k]=a[j];
k++;
j++;
}
}
while(i<=i1)
{
temp[k] = a[i];
i++;
k++;
}
while(j<=j1)
{
temp[k] = a[j];
j++;
k++;
}

for(i=f,j=0;i<=j1;i++,j++)
a[i]=temp[j];

}


void mergesort(int a[],int i,int j)
{
int mid;
mid =(i+j)/2;
if(i<j)
{
mergesort(a,i,mid);
mergesort(a,mid+1,j);
merge(a,i,mid,mid+1,j);
}
}

int main()
{
int n;
cout<<"enter the no of elements in array"<<endl;
cin>>n;
int i;
int arr[n];
cout<<"enter the elements of array\n";
for(i=0;i<n;i++)
{
cin>>arr[i];
}

mergesort(arr,0,n-1);

cout<<"the sorted elements are ";
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}
