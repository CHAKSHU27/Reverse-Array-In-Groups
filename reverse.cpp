#include<iostream>
using namespace std;
int main()
{
int n,k,q;
cin>>n;
q=n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cin>>k;
for(int i=0;i<n;i+=k)
{
if(k+i<=n)
{
for(int j=0;j<k/2;j++)
swap(arr[i+j],arr[i+k-1-j]);
}
else
{
for(int j=i;j<n;j++)
{swap(arr[j],arr[n-1]);
n--;}
}
}
for(int i=0;i<q;i++)
cout<<arr[i]<<" ";
}