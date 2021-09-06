#include <iostream>
using namespace std;
int main()
{
    int no;
    int fac;

    cout << "Enter a Number : " << endl;
    cin >> no;

    fac = 1;
    for (int r=no; r >= 1; r--)
     {
        fac = (fac * r);
    }

    cout << "Factorial ofis" << fac << endl;  
    return 0;
}