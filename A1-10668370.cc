#include <iostream>
using namespace std;

int main()
{  //Program to determine whether an integer is a prime or not..
  int n;
  bool Y=true;

  cout << "Enter any positive integer: ";
  cin >> n;

  for(int i = 2; i <= n /2; i++)
  {
      if(n % i == 0)
      {
          Y = false;
          break;
      }
  }
  if (Y>1)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
