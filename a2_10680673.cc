#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool Prime = true;

  cout << "Please Enter any positive integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          Prime = false;
          
      }
  }
  if (Prime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
