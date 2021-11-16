#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if (str[i]=='a')
            str[i]='b';
        else if(str[i]=='p')
            str[i]='q';
        else if(str[i]=='z')
            str[i]='a';
    }
    cout<<str;
    return 0;   
}
