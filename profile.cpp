#include <iostream>
using namespace std;

struct Shrey
{
    string Name = "Patel Shrey K.";
    string Email = "shreypatel9015@gmail.com";
    string Number = "6395719195";
    string Job = "Looking for Software Developer Intern(CO-OP) Roles.";
};

int main()
{

    Shrey S;

    cout << endl;
    cout << S.Name << endl;
    cout << S.Email << endl;
    cout << S.Number << endl;
    cout << S.Job << endl;
    cout << endl;

    return 0;
}