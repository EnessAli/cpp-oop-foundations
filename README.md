# C++ OOP Foundations

An introduction to C++ object-oriented programming fundamentals: classes, member functions, access control, `std::string`, and the orthodox canonical form.

## Concepts Covered

### Classes & Objects
- Class definition, member variables, member functions
- `public` / `private` / `protected` access specifiers
- `this` pointer

### Orthodox Canonical Form
Every class implements the four required special members:
```cpp
class Foo {
public:
    Foo();                        // Default constructor
    Foo(const Foo &other);        // Copy constructor
    Foo &operator=(const Foo &);  // Copy assignment operator
    ~Foo();                       // Destructor
};
```

### Namespaces & Streams
- `std::cout`, `std::cin`, `std::endl`
- Custom namespace definitions
- `using namespace` and scoped resolution `::`

### String & I/O
- `std::string` vs C-style strings
- `std::cin` for input handling
- Stream manipulators

## Build

```bash
make
./ex00
```

## Tech Stack

`C++98` `OOP` `Makefile` `Orthodox Canonical Form`

