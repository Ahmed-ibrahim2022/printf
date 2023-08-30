#ifndef MAIN_H //Ahmed Ibrahim//
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024

/* Flag Constants */
#define FLAG_MINUS   1
#define FLAG_PLUS    2
#define FLAG_ZERO    4
#define FLAG_HASH    8
#define FLAG_SPACE   16

/* Size Constants */
#define SIZE_LONG    2
#define SIZE_SHORT   1

/**
* struct FormatSpecifier - Structure for format specifiers
* @fmt: Format specifier character
* @fn: Function associated with the format specifier
*/
struct FormatSpecifier
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
};

/**
* typedef struct FormatSpecifier FormatSpecifier_t
* @fmt: Format specifier character
* @fn: Function associated with the format specifier
*/
typedef struct FormatSpecifier FormatSpecifier_t;

/* Function Prototypes */
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list,
                 char buffer[], int flags, int width, int precision, int size);

/* Functions for Different Format Specifiers */
int printChar(va_list args, char buffer[],
             int flags, int width, int precision, int size);
int printString(va_list args, char buffer[],
               int flags, int width, int precision, int size);
int printPercent(va_list args, char buffer[],
                int flags, int width, int precision, int size);

/* ... Define More Functions for Other Format Specifiers ... */

/* Utility Functions */
int getFlags(const char *format, int *i);
int getWidth(const char *format, int *i, va_list args);
int getPrecision(const char *format, int *i, va_list args);
int getSize(const char *format, int *i);
int isPrintableChar(char c);
int appendHexCode(char code, char dest[], int index);
int isDigit(char c);
long int convertSizedNumber(long int num, int size);
long int convertSizedUnsigned(unsigned long int num, int size);

#endif /* MAIN_H */
