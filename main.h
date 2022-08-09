#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _vprintf(const char *format, va_list ap);
void number_to_string(int number, int base, char *buf);
void print_string(char *s);int _vprintf(const char *format, va_list ap);
void number_to_string(int number, int base, char *buf);
void print_string(char *s);

#endif
