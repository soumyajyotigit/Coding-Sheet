// C++ program for the above approach
#include <bits/stdc++.h>
#include <string>
using namespace std;

string capitalization(string s)
{
    for(int i=0;i<s.length();i++){
        if(i==0){
            s[i]=toupper(s[i]);
        }
        else if(s[i-1]==' '){
            s[i]=toupper(s[i]);
        }
    }
    return s;
}

int main()
{  
    string s;
    getline(cin,s);
    cout<<capitalization(s);
    return 0;
    
}
