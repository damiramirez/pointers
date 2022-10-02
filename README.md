# Pointers

## Memory

When we talk about *memory*, we mostly talk about the RAM. Each segment is 1 byte of memory and each segment have an address.

![Memory](images/memory.png)

<!-- | Data Type | Size |
| --- | ----------- |
| `boolean` | 1 byte | 
| `char` | 1 byte |
| `int` | 4 bytes |
| `float` | 4 byte |
| `double` | 8 byte | -->

## Pointers

A *pointer* is a variable whose value is the address of another variable. The data type of the pointer must be the same data type as the variable.

```cpp
  int a = 10; // actual variable declaration
  int *p; // pointer variable declaration 

  p = &a; // store address of var in pointer variable
```

- `&` give me the address of the particular variable. 
- `*p` give me the value at the location that it points to. This is called *dereferencing*

## Pointers Arithmetic

We can perform arithmetic operations on the pointers like addition, subtraction, etc. However, as we know that pointer contains the address, the result of an arithmetic operation performed on the pointer will also be a pointer if the other operand is of type integer.

```cpp
  int a = 10;
  int *p = &a;

  cout << "Pointer points to: " << p << endl; // 0x93f95ff7d4
  cout << "Pointer points to + 1: " << (p + 1) << endl; // 0x93f95ff7d8 (4 bytes more)
``` 

## Pointer to pointer

Pointer to a pointer is a form of multiple indirection or a chain of pointers.
Normally, a pointer contains the address of a variable. When we define a
pointer to a pointer, the first pointer contains the address of the second
pointer, which points to the location that contains the actual value as shown
below.

A variable that is a pointer to a pointer must be declared as such `int **pointerToPointer`.