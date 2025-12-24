#include <iostream>
#include <set>
using namespace std;
int main()
{
    string n;
    cin >> n;
    set<char> gender;
    for (char c : n)
    {
        gender.insert(c);
    }
    if (gender.size()%2 == 0)
        cout<< "CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}