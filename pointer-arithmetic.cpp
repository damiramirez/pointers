#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int *p;
  p = &a;

  cout << "Pointer points to: " << p << endl;
  cout << "Pointer points to + 1: " << (p + 1) << endl;
  cout << "Value of pointer + 1 - Garbage value: " << *(p + 1) << endl;
}