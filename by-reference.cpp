#include <iostream>

using namespace std;

void increment(int a)
{
  a = a + 1;
  cout << "Address of variable a in increment = " << &a << endl;
}

void increment(int *p)
{
  *p = (*p) + 1;
  cout << "Address of variable a in increment with pointer = " << p << endl;
}

int main()
{
  int a = 10;
  increment(a);
  cout << "Address of variable a in main = " << &a << endl;
  cout << "a = " << a << endl;
  cout << "Pointer as argument" << endl;
  increment(&a);
  cout << "Address of variable a in main = " << &a << endl;
  cout << "a = " << a << endl;
}