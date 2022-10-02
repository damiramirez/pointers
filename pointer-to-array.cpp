#include <iostream>

using namespace std;

int main()
{
  int A[] = {2, 4, 5, 8, 1};

  for (int i = 0; i < 5; i++)
  {
    cout << "Addres of array: " << A << endl;
    cout << "Address of A[" << i << "]:" << &A[i] << endl;
    cout << "Value of A[" << i << "]:" << A[i] << endl;
    cout << "Value of A[" << i << "] - dereferencing:" << *(A + i) << endl;
  }
}