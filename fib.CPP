//To display the first 40 terms of the Fibonacci sequence using recursion. 
#include <iostream>
#include<iomanip>
using namespace std;
int fib(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}
int main() {
  cout << "The first 40 Fibonacci numbers are: " << endl;
  for (int i = 0; i < 40; i++) {
    cout << fib(i) << " ";
  }
  cout << endl;
  return 0;
}
