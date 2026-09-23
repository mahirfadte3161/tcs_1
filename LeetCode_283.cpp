#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left=0,r=0;
    for(r;r<n;r++)
    {
        if(arr[r]!=0)
        {
            swap(arr[r],arr[left]);
            left++;
        }
    }
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
    
}
