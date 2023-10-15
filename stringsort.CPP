//Rearranges the strings in ascending order based on their lengths
//Sorts each individual string in ascending order
#include<iostream>
#include<iomanip>
#include<string.h>
#include<algorithm>
using namespace std;
int wordsort(string s[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if( s[i]>s[i+1])
            {
                string temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
         }
         counter++;
    }
}
int lettersort(string s)
{
    sort(s.begin(),s.end(),less<int>());
    cout<<s<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of words";
    cin>>n;
    n+=1;
    string s[n];
    cout<<"Enter words";
    for (int  i = 0; i < n; i++)
    {
        getline(cin,s[i]);
    }
    wordsort(s,n);
    cout<<"The words sorted by their size are";
    for (int  i = 0; i < n; i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<"The words sorted alphabetically";
    for (int  i = 0; i < n; i++)
    {
        lettersort(s[i]);
    }
}