#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,arr1[100][100],trans[10][10];
    cin>>r>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr1[i][j];
        }
    }
    
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=arr1[i][j];
            
        }
        cout<<endl;
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<trans[i][j];
        }
        cout<<endl;
    }


    
    return 0;
}
