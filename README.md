# _printf :hammer_and_wrench:

As our own version of printf, make an output conversion in C program with defined specifiers.
This project is part of the low-level programming part at Holberton School.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc` version 11.4.0.

## Usage :running:

To execute it need to compile all `.c` files in the repository and include the header `main.h` with the main test function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

Output:
```
$ ./a.out
Hello, World!
```

## Description :memo:

The function `_printf` writes output to standard output. The function writes
under the control of a `format` string that specifies the type of arguments, after what they are converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

If successful result, `_printf` returns the number of characters printed.
If an output error is encountered, the function returns `-1`.

#### c
The `int` argument is converted to an `char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 'H');
}
```
Output:
```
H
```

#### s
The `char *` argument is a pointer to a character array.
Characters from the array are written starting from the first element of
the array until the end, not including the terminating null byte (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("hello %s\n", "world", 1, 2, 3, 4);
}
```
Output:
```
hello, world
```

#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
## License :lock:

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

## Authors :black_nib:

* Nicolas Fouquet <[PhantomWatchdog](https://github.com/PhantomWatchdog)>
* Sofiane Slimane <[SofianeSlimane](https://github.com/SofianeSlimane)>

## Acknowledgements :pray:

The `_printf` function use similar functionality of the C standard library
function `printf`. This README borrows from the Linux man page
[printf(3)](https://linux.die.net/man/3/printf).

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool.com/).

:traffic_light: :boom: :police_car: :roller_coaster: :skull:

<[flochart](https://github.com/PhantomWatchdog/holbertonschool-printf/blob/main/Flowchart.png)>
