#include<iostream>
using namespace std;
int main()
{
    int a[10] = {0},i=0,sum=0;
    cout << "Enter 10 positive elements of an array"<<endl;
    for(i=0;i<10;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<10;i++)
    {
        sum = sum + a[i];
    }
    cout << "The sum of all lements of the array is :- " << sum;
    return 0;
}