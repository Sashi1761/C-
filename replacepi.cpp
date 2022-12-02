#include <iostream>
using namespace std;
void replacepi(string s)
{
    int i;
    if (s.length = 0)
    {
        return;
    }

    if (s[0] = p && s[i] = 'i')
    {
        cout << '3.14';
        replacepi(s.substr(2));
    }

    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}
int main()
{
    replacepi('pippppiiiip');
}