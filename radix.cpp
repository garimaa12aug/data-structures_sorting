#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int findmax(int arr[],int n)
{
int i,max;
max=arr[0];

for(i=1;i<n;i++)
{
 if(arr[i]>max)
 max=arr[i];
}
cout<<"max element in array is"<<max<<endl;
return max;
}


int finddigits(int max)
{
int count=0;
while(max!=0)
{
max=max/10;
count++;
}
cout<<"max digits is"<<count<<endl;
return count;
}


void countsort(int arr[],int n,int value)
{
int output[n];
int brr[10]={0};
for(int i=0;i<n;i++)
brr[(arr[i]/value)%10]++;
int i,j,k;
k=0;
for(i=0;i<9;i++)
{
while(brr[i]!=0)
{
for(j=0;j<n;j++)
{
if(i==((arr[j]/value)%10))
{
output[k++]=arr[j];
brr[i]--;
}
}
}
}
for (i = 0; i < n; i++)
arr[i] = output[i];                   
}



int main()
{
int n;
cout<<"enter size of array";
cin>>n;
cout<<"enter elements of array";
int i;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
int max = findmax(arr,n);
int k;
k = finddigits(max);
int value=1;
for(i=1;i<=k;i++)
{
countsort(arr,n,value);
value=value*10;              
}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
