#include <iostream>
#include <cstring>

using namespace std;
int main()
{char str[20];
char symbol;
int k=0;
cout<<"Enter string"<<endl;
cin.getline(str,20);
cout<<"Enter symbol"<<endl;
cin >> symbol;
for( unsigned int i=0; i<strlen(str); ++i)
if (str[i]==symbol) k++;
cout<<"k="<<k<<endl;

    return 0;
}
