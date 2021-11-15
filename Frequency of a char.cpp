#include<bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str="billie eilish is an illuminati girl with tallent";
    cout<<"enter char"<<endl;
    char s;
    cin>>s;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==s)
        count++;
    }
    cout<<s<<"="<<count;
    return 0;
}
