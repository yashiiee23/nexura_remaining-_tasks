#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    if (a>b)
    cout<<a<<" is the largest number";
    else if (a==b)
    cout<<"Both the numbers are equal";
    else
    cout<<b<<" is the largest number";
    return 0;


}