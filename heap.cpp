#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int a;
  int *p;

  p = new int; // malloc
  *p = 10;

  delete p; // free

  p = new int[20];

  delete[] p;
}