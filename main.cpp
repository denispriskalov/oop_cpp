#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

int main(int argc, char *argv[])
{
    cout << "hi" << endl;
    Base base;

    return 0;
}
