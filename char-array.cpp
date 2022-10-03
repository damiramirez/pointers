#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char c[5] = {'J', 'O', 'H', 'N', '\0'};
  char *c2;
  c2 = c;

  int len = strlen(c);

  cout << "Length = " << len << endl;
  cout << c2[0] << endl;
  c2[0] = 'A';
  cout << c2 << endl;
  // c2[i] == *(c2 + 1)
}