#include <unistd.h>

void pw_putchar(char c)
{
    write(1, &c, 1);      // Harfi yaz
    write(1, "\n", 1);     // Satır sonu yaz
}
