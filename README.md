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

A **template** is a blueprint for a function or class that works with different data types.

Instead of writing separate code for each type:

```cpp
void	printInt   (int value);
void	printDouble(double value);
void	printString(std::string value);
```

A single template can handle them all:

```cpp
template <typename T>
void	print(T value)
{
	std::cout << value << std::endl;
}
```

Example:

```cpp
print(42);        // T becomes int
print(3.14);      // T becomes double
print("Hello");   // T becomes const char*
```

The compiler automatically generates the correct version of the function based on the argument type.

Templates can be used to create:

- **Function Templates** – Generic functions that work with multiple data types.
- **Class Templates** – Generic classes that work with multiple data types.
- **Variable Templates** *(C++14 and later)* – Generic variables (not used in C++98).

Templates are usually implemented in header files because the compiler must see the full implementation when generating code.

</details>

---

<details>
<summary>Scope Resolution Operator (::)</summary>

---

`::` is the **scope resolution operator**.

When nothing appears before it, it refers to the **global namespace**.

```cpp
::swap(a, b);
::min(a, b);
::max(a, b);
```

C++ organizes code into **namespaces**, which act like containers for functions, classes, and variables.

For example:

```cpp
std::cout << "Hello";
```

means:

```text
namespace std
    └── cout
```

We use `::swap()` instead of `swap()` to explicitly call our own function and avoid confusion with the Standard Library version:

```cpp
std::swap(a, b);
```

</details>

---

<details>
<summary>Const References (const T&)</summary>

---

`const T&` is commonly used for function parameters and return values.

```cpp
template <typename T>
const T &min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}
```

### Why use `const T&`?

| Syntax | Purpose |
|--------|---------|
| `const` | Prevents modification of the object. |
| `&` | Avoids making unnecessary copies. |
| `const T&` | Efficient and read-only. Ideal for large objects such as `std::string`. |

### Rule of thumb

- **Input:** use `const T&` when the function only needs to read the object.
- **Output:** return `const T&` to avoid copying while preventing modification of the returned object.

</details>

---

## Resources
- https://www.geeksforgeeks.org/cpp/templates-cpp/