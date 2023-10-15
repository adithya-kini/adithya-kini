//to verify the identity (A.B)’ = B’. A’ 
#include<iostream>
#include<iomanip>
#include<process.h>
using namespace std;
int trans(int b,int a,int n,int m)
{
    for(int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            b[j][i]=a[i][j];
}
int product(int s,int a,,int b,int m1,int n1,int m2,int n2)
{
    int s[n1][m2];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {   s[i][j]=0;
            for(k=0;k<m1;k++)
            {
                s[i][j]=s[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}
int main()
{
    int n1,m1,n2,m2,i=0,j=0,k=0;
    cout<<"Enter the number of rows and columns";
    cin>>n1>>m1;
    int **a=new *[n1];
    for (int i = 0; i < n1; i++)
    {
        a[n1]=new int[m1];
    }
    printf("Enter the matrix");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the number of rows and columns";
    cin>>n2>>m2;
    int **b=new *[n2];
    for (int i = 0; i < n2; i++)
    {
        b[n2]=new int[m2];
    }
    cout<<"Enter the matrix";
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            cin>>b[i][j];
        }
    }
    if(m1!=n2)
    {
        cout<<"the given matrix is not compatible for multipliction";
        exit(0);
    }
    int **s=new *[n1];
    for (int i = 0; i < n1; i++)
    {
        s[n1]=new int[m2];
    }
    product(s,a,b,n2,n1,m2,n2);
    int **a1=new *[m1];
    for (int i = 0; i < m1; i++)
    {
        a[m1]=new int[n1];
    }
    trans(a1,a,n1,m1);
    int **b1=new *[m2];
    for (int i = 0; i < m2; i++)
    {
        b1[m2]=new int[n2];
    }
    trans(b1,b,n2,m2);
    int **s1=new *[m2];
    for (int i = 0; i < n1; i++)
    {
        s1[m2]=new int[n1];
    }
    trans(s1,s,n1,m2);
    int **s2=new *[m2];
    for (int i = 0; i < m2; i++)
    {
        s2[m2]=new int[n1];
    }
    product(s2,b1,a1,m2,n2,m1,n1);
    cout<<"(A*B)`=";
    for (int  i = 0; i < m2; i++)
    {
        for (int  j = 0; j < n1; j++)
        {
            cout<<s1[i][j];
        }
        cout<<endl;
    }
    cout<<"A`*B`=";
    for (int  i = 0; i < m2; i++)
    {
        for (int  j = 0; j < n1; j++)
        {
            cout<<s2[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<"Hence (A*B)`=A`*B`";
}