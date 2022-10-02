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

A *pointer* is a variable whose value is the address of another variable.

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