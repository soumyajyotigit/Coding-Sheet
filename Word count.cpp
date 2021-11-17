// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count=1;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout<<count;
    return 0;
}
