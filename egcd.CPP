 //finding gcd using euclids algorithm
 #include<iostream>
 #include<iomanip>
 using namespace std;
int main()
{
    int n,m;
    int gcd=10;
    cout<<"Enter the two elements";
    cin>>m>>n;
    while (gcd>0)
    {
        gcd=m%n;
        m=n;
        n=gcd;
    }
    cout<<"The gcd is"<<m;
}
