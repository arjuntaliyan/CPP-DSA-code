// Replace pi with 3.14 in string

#include<iostream>
using namespace std;

void replacePi (string s) 
{
    if(s.length() == 0)                 // Base Code
    {
        return ;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi (s.substr(2));
    }
}

int main ()
{
    replacePi ("pippxxppixipi");
    return 0;

}