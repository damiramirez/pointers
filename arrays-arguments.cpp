#include <iostream>

using namespace std;

int sumOfElements(int A[], int size)
{
  int total = 0;
  for (int i = 0; i < size; i++)
  {
    total += A[i];
  }

  return total;
}

void doubleElements(int *A, int size)
{
  int total = 1;
  for (int i = 0; i < size; i++)
  {
    A[i] = 2 * A[i];
  }
}

int main()
{
  int A[] = {1, 2, 3, 4, 5};
  int size = sizeof(A) / sizeof(A[0]);

  int total = sumOfElements(A, size);
  cout << "Sum of elements = " << total << endl;

  doubleElements(A, size);

  for (int i = 0; i < size; i++)
  {
    cout << "Value: " << A[i] << endl;
  }
}