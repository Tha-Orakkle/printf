#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void case_c(int count, va_list ap);
void case_d(int count, va_list ap);
void case_percent(int count);
void case_s(int count, va_list ap);
int _putchar(char c);
int _vprintf(const char *format, va_list ap);
void number_to_string(int number, int base, char *buf);
void print_string(char *s);int _vprintf(const char *format, va_list ap);
void number_to_string(int number, int base, char *buf);
void print_string(char *s);

#endif
