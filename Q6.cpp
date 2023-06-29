#include<iostream>
using namespace std;
int main()
{
    float a = 0,b = 0, c = 0, avg = 0;
    cout << "Enter three numbers" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    avg = (a + b + c)/3;
    cout << "The average of three numbers is :- " << avg;
    return 0;
}