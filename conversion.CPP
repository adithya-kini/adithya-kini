//To convert decimal number to hexadecimal ,octal and binary
#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
int conv(int a,int b)
{
    vector<int> con_vector;
    while (a>0)
    {
        con_vector.push_back(a%b);
        a/=b;
    }
    for (int  i =con_vector.size()-1; i >=0; --i)
    {
        cout<<con_vector.at(i);
    }
}
int hex(int n)
{
    char h[100];
    int temp,i=0;
    for{ i=0;n!=0;i++}
    {
        temp=n%16;
        if (temp<10)
        {
            hex[i]=temp+48;
        }
        else
        h[i]=temp+55;
        n=n/16;
    }
    for (int  j=i-1; j>0; j--)
    {
        cout<<hex[i];
    }
    
}
int main() {
  int d;
  cout << "Enter a decimal number: ";
  cin >>d;
  cout<<"Hexadecimal:";
  hex(d);
  cout<<endl;
  cout << "Octal: " ;
  conv(d,8);
  cout<< endl;
  cout << "Binary: ";
  conv(d,2);
  cout<< endl;
  return 0;
}
