<p align="center">
  <img src="https://cdn-icons-png.flaticon.com/512/6132/6132222.png" width="60" alt="C++ Logo">
</p>

<h1 align="center">CPP Module 07</h1>

<h3 align="center">
    C++ Templates • Function Templates • Iteration • Class Templates
</h3>

---

## Overview

CPP Module 07 introduces **templates**, one of C++'s most powerful features. 

Templates enable writing **generic functions and classes** that work with multiple data types without duplicating code, promoting code reusability and type safety.

Each exercise focuses on a different application of templates:

- **ex00:** Implement generic `swap`, `min`, and `max` function templates.
- **ex01:** Create the `iter` function template to apply a function to every element of an array.
- **ex02:** Implement a generic `Array<T>` class featuring dynamic memory allocation, deep copying, bounds checking, and exception handling.

---

## OOP Concepts by Exercise

| Exercise | Concepts Introduced |
| :------: | ------------------- |
| **ex00** | Function Templates, Type Parameters, Generic Programming, References, Comparison Operators |
| **ex01** | Function Templates, Arrays, Function Parameters, Callable Functions, Template Type Deduction |
| **ex02** | Class Templates, Dynamic Memory Allocation, Deep Copy, Orthodox Canonical Form, Operator Overloading (`operator[]`), Exceptions |

---

## Concepts Learned

<details>
<summary>Templates</summary>

---

Templates allow one function or class to work with different data types without rewriting the same logic.

```cpp
template <typename T>
void	print(T value)
{
	std::cout << value << std::endl;
}
---

## Resources
- https://www.geeksforgeeks.org/cpp/templates-cpp/