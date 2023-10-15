//sum of digits of a number with and without recursion
#include <iostream>
using namespace std;
int sumr(int n) 
{
    int sum=0;
  if (n == 0) 
  {
    return sum;
  } else 
  {
    sum=(n % 10) + sumr(n / 10);
  }
}
int sum(int n) 
{
    int sum=0;
    for (; n!=0; n/=10)
    {
        int rem=n%10;
        sum=sum+rem;
    }
  return sum;
}
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Sum of digits using recursion: " << sumr(n) << endl;
  cout << "Sum of digits without recursion: " << sum(n) << endl;
  return 0;
}
