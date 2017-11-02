#include <iostream>
#include <string>

using namespace std;

int main()
{string str; unsigned int k=0, pos=0;
cout<<"Enter string"<<endl;
getline(cin,str);
while (k<str.length())
{ if (str[k]>='0' && str[k]<='9')
str.erase(k,1);
else k++;}
cout<<"string="<<str<<endl;

    return 0;
}
