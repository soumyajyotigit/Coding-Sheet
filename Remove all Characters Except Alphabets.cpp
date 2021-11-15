#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string temp="";
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]==' '){
            temp=temp+str[i];
        }
    }
    str=temp;
    cout<<str;
    return 0;
}
