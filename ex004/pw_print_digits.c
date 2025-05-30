#include <unistd.h>

void pw_print_digits(void)
{
    char c;

    c = '0';
    while (c <= '9')
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
	}