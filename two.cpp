#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<int,int> ump;
int p;
cin>>p;
while(p--)
{
    int n;
    cin>>n;
    int arr[n],prev[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int k=0;
int flag=0; 
int count=0;
int sum=0;
for (int i=0;i<n;i++)
{
    sum=sum+arr[i];
    if(sum==k)
    count++;

    if(ump.find(sum-k)!=ump.end())
    count=count+ump[sum-k];
    ump[sum]++;
}
cout<<count<<endl;
ump.clear();
}
}