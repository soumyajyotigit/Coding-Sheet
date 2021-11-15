#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str[150];
    int vowel,consonant,digit,space;
    vowel=consonant=digit=space=0;
    cin.getline(str,150);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a'&& str[i]<='z') || str[i]=='A' || str[i]=='Z')
        {
            consonant++;
        }
        else if(str[i]>=0 && str[i]<=9)
        {
            digit++;
        }
        else if (str[i]==' ')
        {
            space++;
        }
    }

cout<<"vowel="<<vowel<<endl;
cout<<"consanant="<<consonant<<endl;
cout<<"digits="<<digit<<endl;
cout<<"spaces="<<space<<endl;

return 0;
}
