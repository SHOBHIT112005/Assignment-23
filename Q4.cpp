#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
    float r = 0, area = 0;
    cout << "Enter the radius of the circle" << endl;
    cin >> r;
    area = (pi)*(r)*(r);
    cout << "The area of the circle with entered radius is :- " << area << " square units.";
    return 0;
}