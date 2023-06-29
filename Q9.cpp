#include<iostream>
using namespace std;
int main()
{
    int x = 0,y = 0,z = 0;
    cout << "Enter two positive integers" << endl;
    cin >> x;
    cin >> y;
    z = (x>y)? x:y;
    cout << "The manimum of the given two numbers is :- " << z;
    return 0;
}