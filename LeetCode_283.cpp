#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
   bool compare(int a, int b)
{
    if(a == 0 && b != 0)
        return false;

    if(a != 0 && b == 0)
        return true;

    return false;
}
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr.begin(),arr.end(),compare);
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}