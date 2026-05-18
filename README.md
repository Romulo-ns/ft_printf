*This project has been created as part of the 42 curriculum by romdo-na.*

# ft_printf

## Description

ft_printf is a custom implementation of the standard C `printf()` function.

The goal of this project is to recreate the behavior of `printf` while learning how
variadic functions work internally in C.

This project focuses on:
- variadic arguments using `stdarg.h`
- formatted output
- hexadecimal conversion
- recursion
- low-level output with `write()`
- modular and extensible code architecture

The implementation supports the mandatory conversions required by the 42 subject and
was developed following the 42 Norm.

---

## Features

Implemented conversions:

- `%c` → print a character
- `%s` → print a string
- `%p` → print a pointer address in hexadecimal
- `%d` → print a decimal integer
- `%i` → print an integer in base 10
- `%u` → print an unsigned decimal integer
- `%x` → print hexadecimal lowercase
- `%X` → print hexadecimal uppercase
- `%%` → print a percent sign

---

## Instructions

### Clone the repository

```bash
git clone https://github.com/your_username/ft_printf.git
cd ft_printf
```

### Compile the project

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and library

```bash
make fclean
```

### Recompile everything

```bash
make re
```

------------------------------------------------------------------------
Test Instructions
Compile the library

First, generate the static library using your Makefile:

make
Compile the test file

Compile main.c and link it directly with the generated libftprintf.a:

cc -Wall -Wextra -Werror main.c libftprintf.a -o test_runner
Run the tests

Execute the generated binary:

./test_runner
------------------------------------------------------------------------

## Resources

### Documentation

- ISO C Standard Library
- Linux man pages
- https://man7.org/linux/man-pages/man3/printf.3.html
- https://man7.org/linux/man-pages/man3/stdarg.3.html

### Tutorials and References

- Variadic functions in C
- Recursion in C
- Hexadecimal conversion algorithms
- 42 School documentation

### AI Usage

AI tools were used strictly as learning support for:
- understanding variadic functions
- discussing possible architectures
- reviewing hexadecimal conversion logic
- improving documentation structure

All code was manually written, tested, debugged, and fully understood before submission.

---

## Final Notes

This project was an important introduction to:
- variadic functions
- formatted output systems
- recursion
- low-level programming concepts

It also reinforced the importance of modular code design and clean architecture.