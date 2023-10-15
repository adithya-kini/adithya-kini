//to sort the charecters of a word alphabetically
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
   cout<<"Enter the word";
   gets(a);
   int n=strlen(a);
   for (int i = n-1; i>=0; i--)
   {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }

   }
   puts(a);
   return 0;
}
