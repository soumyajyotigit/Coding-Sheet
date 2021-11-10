#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,arr1[100][100],arr2[100][100],sum[100][100];
    cin>>r>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            cout<<sum[i][j];

        }
        cout<<endl;
    }
    
    return 0;
}
