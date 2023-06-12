# ft_printf

This project is part of the curriculum at 42 school and aims to recreate the functionality of the standard C library function `printf`. The project involves creating a function that can handle these format specifiers: %c, %s, %p, %d, %i, %u, %x, %X, %%.

## Table of Contents

- [Project Description](#project-description)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)

## Project Description

The "ft_printf" project focuses on developing a function that can handle formatted output. The main objectives of the project are:

1. Implementing a function that can handle a subset of format specifiers, similar to the standard `printf` function.
2. Parsing the format string to identify and process the specifiers correctly.
3. Handling various data types, such as integers, characters, strings, and pointers.

## Installation

To use the "ft_printf" function, follow these steps:

1. Clone the repository to your local machine:

```
git clone <repo url> ft_printf
```

2. Navigate to the project directory:

```
cd ft_printf
```

3. Build the library by running the make command:

```
make
```

4. Include the `ft_printf.h` header file in your code:

```c
#include "ft_printf.h"
```

5. Compile your code, linking it with the `ft_printf` function:

```
gcc your_code.c libftprintf.a -o your_program
```

## Usage

To use the `ft_printf` function, follow these steps:

1. Call the function, passing the format string and any additional arguments:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s!\n", "new user");
    ft_printf("The value of x is %d and the value of y is %d\n", x, y);
    return (0);
}
```

2. The function will print the formatted output to the standard output.

## Supported Format Specifiers

The `ft_printf` function supports the following format specifiers:

- `%c` prints a single character.
- `%s` prints a string (as defined by the common C convention).
- `%p`: the void * pointer argument has to be printed in hexadecimal format.
- `%d` prints a decimal (base 10) number.
- `%i` prints an integer in base 10.
- `%u` prints an unsigned decimal (base 10) number.
- `%x` prints a number in hexadecimal (base 16) lowercase format.
- `%X` prints a number in hexadecimal (base 16) uppercase format.
- `%%` prints a percent sign.