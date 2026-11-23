#include <iostream>
using namespace std;
int main() 
{
    int n,binary=0, remainder, place=1;
    cout<<"Enter a decimal number: ";
    cin>>n;

    while(n > 0)
    {
        remainder=n%2;
        binary=binary+remainder*place;
        n=n/2;
        place=place*10;
    }
    cout<<"Binary = "<<binary;
    return 0;
}