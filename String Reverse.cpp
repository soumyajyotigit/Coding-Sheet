#include <bits/stdc++.h>
#include <string>
using namespace std;

string palindrome(string s){
    string p=s;
    reverse(p.begin(),p.end());
    if (s==p){
        return "yes";
    }
    else {
        return "no";
    }
}

int main()
{
   string s;
   getline(cin,s);
   cout<<palindrome(s);
   return 0;
}
