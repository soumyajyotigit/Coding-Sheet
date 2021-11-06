#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
           
    }
    int x=INT_MIN;
    // int x;
    for(int i=0;i<n;i++){
        x=max(arr[i],x);
    }
    cout<<x;
    return 0;
}
