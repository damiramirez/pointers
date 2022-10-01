#include <iostream>

using namespace std;

int main()
{
  int a;
  int *p;
  a = 10;
  p = &a;

  cout << endl;
  cout << "Pointer points to: " << p << endl;
  cout << "Value in that direction: " << *p << endl;
  cout << "Address of a (sames as p): " << &a << endl;

  int b = 20;
  *p = b;

  cout << endl;
  cout << "Pointer points to: " << p << endl;
  cout << "Value in that direction: " << *p << endl;
  cout << "Value of b: " << b << endl;

  p = &b;

  cout << endl;
  cout << "Pointer points to: " << p << endl;
  cout << "Value in that direction: " << *p << endl;
  cout << "Address of b (sames as p): " << &b << endl;
}