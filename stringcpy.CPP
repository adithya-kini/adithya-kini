#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string s,*p;
    cout<<"Enter the string ";
    cin>>s;
    p=&s;
    cout<<"The string is "<<*p;
    return 0;
}