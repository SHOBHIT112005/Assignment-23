#include<iostream>
using namespace std;
int main()
{
    int a = 0,b = 0;
    cout << "Enter two positive integers" << endl;
    cin >> a;
    cin >> b;
    cout << "The values before swapping :- a = "<< a << " b = " << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "The swapped values are :- a = " << a << " b = "<< b;
    return 0;
}