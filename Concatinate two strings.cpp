#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;

    return 0;
}


//different method


#include <iostream>
#include <string>
using namespace std;

int main() {
    int count=0;
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);

    str1.append(str2);
    cout<<str1;
    return 0;
    
}
