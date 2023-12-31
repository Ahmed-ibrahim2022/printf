# printf

This project is a recreation of the `printf()` function in C. It supports the following conversion specifiers:

* `c`: Prints a character.
* `s`: Prints a string.
* `d`: Prints an integer in decimal format.
* `i`: Prints an integer in decimal format.
* `o`: Prints an integer in octal format.
* `u`: Prints an integer in hexadecimal format (unsigned).
* `x`: Prints an integer in hexadecimal format (lowercase).
* `X`: Prints an integer in hexadecimal format (uppercase).
* `p`: Prints a pointer address.
* `%`: Prints a literal '%' character.

The project also supports the following flags:

* `-`: Left-justify the output.
* `+`: Print a sign (+ or -) for numeric conversions.
* `space`: Print a space before positive numeric conversions.
* `#`: Print a leading 0 for octal and hexadecimal conversions.
* `0`: Pad the output with zeros instead of spaces.

The project also supports the following width and precision modifiers:

* `width`: The minimum width of the output.
* `.precision`: The precision of the output.

In addition to the standard conversion specifiers, this project also supports the following custom conversion specifiers:

* `r`: Prints a string in reverse.
* `R`: Prints a string in rot13 encoding.
* `b`: Prints an integer in binary format.
* `h`: Prints an integer in hexadecimal format (short).
* `l`: Prints an integer in hexadecimal format (long).
* `j`: Prints an integer in hexadecimal format (long long).
* `z`: Prints an integer in hexadecimal format (size_t).

For example, the following code would print the number 1234567890 to the console:

```c
printf("%d\n", 1234567890);
