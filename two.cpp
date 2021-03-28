#include<bits/stdc++.h>
using namespace std;
int main()
{

unordered_map<int,int> ump;
vector<int> arr{6,-1,-3,4,-2,2,4,6,-12,-7};
int n=arr.size();
int k=6; 
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
}
