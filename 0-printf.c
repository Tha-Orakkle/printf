#include <stdio.h>
#include <stdarg.h>

void _vprintf(const char *format, va_list ap);
void _printf(const char *format, ...);

int main(void)
{
    char ch = 'G';
    _printf("George is my partner\n");
    _printf("George is a %c\n", ch);
    _printf("%s\n", "Immaculate");
    _printf("%% %s", "bhinjk");
    return (0);
}

void _printf(const char *format, ...)
{
    //printf("the is a %s", "boy")
    va_list ap;
    va_start(ap, format);
    //block of codes
    _vprintf(format, ap);
    va_end(ap);
}

void _vprintf(const char *format, va_list ap)
{
    int flag = 0;
    char *str;
    while(*format)
    {
        if (flag == 0)
        {
            if (*format == '%')
               flag = 1;
            else
               putchar(*format);
        }
        else
        {
            switch (*format)
            {
                case 'c':
                
                putchar(va_arg(ap, int));
                break;
                
                case 's':
                str = va_arg(ap, char *);
                while(*str)
                {
                    putchar(*str++);
                }
                break;
                case '%':
                putchar('%');
                break;
       
                
                
                default:
                  break;
            }
            flag = 0;
        }
        *format++;
    }
}
