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

---

## Usage

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s\n", "42");
    ft_printf("Value: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

Expected output:

```text
Hello 42
Value: 42
Hexadecimal: ff
```

---

## Algorithm and Data Structure

The implementation uses a dispatcher-based architecture.

The `ft_printf()` function parses the format string character by character.
When the parser encounters a `%` symbol, the following character is interpreted
as a conversion specifier.

Each specifier is delegated to a dedicated handler function responsible for
printing the corresponding data type.

Example:
- `%d` → integer handler
- `%s` → string handler
- `%x` → hexadecimal handler

## Example Conversions

```c
ft_printf("%c\n", 'A');
ft_printf("%s\n", "Hello");
ft_printf("%d\n", -42);
ft_printf("%u\n", 42);
ft_printf("%x\n", 255);
ft_printf("%X\n", 255);
ft_printf("%p\n", ptr);
ft_printf("%%\n");
```

---

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