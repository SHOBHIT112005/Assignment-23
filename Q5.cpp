#include<iostream>
using namespace std;
int main()
{
    float l = 0, b = 0, h = 0, volume = 0;
    cout << "Enter the sides of a cuboid" << endl;
    cin >> l;
    cin >> b;
    cin >> h;
    volume = l*b*h;
    cout << "The volume of cuboid is :- " << volume << " cubic units";
    return 0;
}