/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int a, b;
  cout << "enter number";
  cin >> a;
  if (a > 1 && a < 4)
    cout << "prime";
  for (b = 2; b <= a; b++)
    {
      if (a % b == 0 && a != b)
	{
	  cout << "not prime";
	  break;
	}
      if (a == b)
	{
	  cout << "prime";
	}
    }
  return 0;
}
