#include <iostream>

using namespace std;

int main()
{
  int x = 5;
  int *p = &x;

  int **q = &p;

  cout << "Value of *p: " << *p << endl;   // 5
  cout << "Value of *q: " << *q << endl;   // Address of p
  cout << "Value of **q: " << **q << endl; // 5
}